from flask import Flask
from flask import request
app = Flask(__name__)

    
@app.route('/find', methods=['POST', 'GET'])
def find(course):
    
    
    searchword = request.args.get('course')
    # show the user's course input
    if request.method == 'POST':
        if (searchword == 'CSCI2240'):
            return 'Find the classrom for CSCI2240'

        
        if (searchword == 'CSCI1300'):
            return 'Find the classrom for CSCI1300'

        else:
            return 'Sorry. No result for course %s' % searchword

@app.route('/user/<username>')
def show_user_profile(username):
    # show the user profile for that user
    return 'User %s' % username

@app.route('/notification')
def notification():
    
    return 'Get notification. To be implemented'

if __name__ == '__main__':
    app.run()
