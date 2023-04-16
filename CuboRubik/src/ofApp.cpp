#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	
	
	ofDisableAlphaBlending();
	ofEnableDepthTest();
	light.enable();
	light.setPosition(ofVec3f(-40, 40, 55));
	light.lookAt(ofVec3f(-40, 40, 30));

	for (int i = 0; i < 27; i++)
	{
		cuboRubik.cubos[i].setup();
	}

}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	cam.begin();
	//Flecha z+

	ofSetColor(ofColor::blue);
	ofVec3f arrowTailPointZ(0, 0, 0);
	ofVec3f arrowHeadPointZ(0, 0, 550);
	ofDrawArrow(arrowTailPointZ, arrowHeadPointZ, 7.0);
	//Flecha x+
	ofSetColor(ofColor::red);
	ofVec3f arrowTailPointX(0, 0, 0);
	ofVec3f arrowHeadPointX(550, 0, 0);
	ofDrawArrow(arrowTailPointX, arrowHeadPointX, 2.0);
	//Flecha Y+
	ofSetColor(ofColor::green);
	ofVec3f arrowTailPointY(0, 0, 0);
	ofVec3f arrowHeadPointY(0, 550, 0);
	ofDrawArrow(arrowTailPointY, arrowHeadPointY, 2.0);
	
	//cara1
	if (cuboRubik.CaraR == true)
	{
		cuboRubik.moverCaraR();
	}
	else
	{
		if (cuboRubik.CaraRP == true)
		{
			cuboRubik.moverCaraRP();
		}
		else
		{
			if (cuboRubik.CaraM == true)
			{
				cuboRubik.moverCaraM();
			}
			else
			{
				if (cuboRubik.CaraMP == true)
				{
					cuboRubik.moverCaraMP();
				}
				else
				{
					if (cuboRubik.CaraL == true)
					{
						cuboRubik.moverCaraL();
					}
					else
					{
						if (cuboRubik.CaraLP == true)
						{
							cuboRubik.moverCaraLP();
						}
						else
						{
							if (cuboRubik.CaraF == true)
							{
								cuboRubik.moverCaraF();
							}
							else
							{
								if (cuboRubik.CaraFP == true)
								{
									cuboRubik.moverCaraFP();
								}
								else
								{
									if (cuboRubik.CaraS == true)
									{
										cuboRubik.moverCaraS();
									}
									else
									{
										if (cuboRubik.CaraSP == true)
										{
											cuboRubik.moverCaraSP();
										}
										else
										{
											if (cuboRubik.CaraB == true)
											{
												cuboRubik.moverCaraB();
											}
											else
											{
												if (cuboRubik.CaraBP == true)
												{
													cuboRubik.moverCaraBP();
												}
												else
												{
													if (cuboRubik.CaraU == true)
													{
														cuboRubik.moverCaraU();
													}
													else
													{
														if (cuboRubik.CaraUP == true)
														{
															cuboRubik.moverCaraUP();
														}
														else
														{
															if (cuboRubik.CaraD == true)
															{
																cuboRubik.moverCaraD();
															}
															else
															{
																if (cuboRubik.CaraDP == true)
																{
																	cuboRubik.moverCaraDP();
																}
																
																else
																{
																	if (cuboRubik.CaraE == true)
																	{
																		cuboRubik.moverCaraE();
																	}
																	else
																	{
																		if (cuboRubik.CaraEP == true)
																		{
																			cuboRubik.moverCaraEP();
																		}
																		else
																		{
																			cuboRubik.DibujarCuboEstatico();
																		}
																	}
																	
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}






	cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	switch (key) {
	case 'q':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraR = !cuboRubik.CaraR;
		}

		break;
	case 'w':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraRP = !cuboRubik.CaraRP;
		}


		break;
	case 'a':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraM = !cuboRubik.CaraM;
		}

		break;
	case 's':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraMP = !cuboRubik.CaraMP;
		}
		break;
	case 'x':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraL = !cuboRubik.CaraL;
		}
		break;
	case 'z':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraLP = !cuboRubik.CaraLP;
		}
		break;
	case 'e':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraF = !cuboRubik.CaraF;
		}
		break;
	case 'r':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE==true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraFP = !cuboRubik.CaraFP;
		}
		break;
	case 'd':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraS = !cuboRubik.CaraS;
		}
		break;
	case 'f':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraSP = !cuboRubik.CaraSP;
		}
		break;
	case 'v':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraB = !cuboRubik.CaraB;
		}
		break;
	case 'c':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraBP = !cuboRubik.CaraBP;
		}
		break;
	case 't':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraU = !cuboRubik.CaraU;
		}
		break;
	case 'y':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraUP = !cuboRubik.CaraUP;
		}
		break;
	case 'n':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraD = !cuboRubik.CaraD;
		}
		break;
	case 'b':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraDP = !cuboRubik.CaraDP;
		}
		break;
	case 'h':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraE = !cuboRubik.CaraE;
		}
		break;
	case 'g':
		if (cuboRubik.CaraR == true || cuboRubik.CaraRP == true || cuboRubik.CaraB == true || cuboRubik.CaraBP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraF == true || cuboRubik.CaraFP == true || cuboRubik.CaraS == true || cuboRubik.CaraSP == true || cuboRubik.CaraU == true || cuboRubik.CaraUP == true || cuboRubik.CaraM == true || cuboRubik.CaraMP == true || cuboRubik.CaraL == true || cuboRubik.CaraLP == true || cuboRubik.CaraE == true || cuboRubik.CaraEP == true || cuboRubik.CaraD == true || cuboRubik.CaraDP == true) {
			cout << "No puede mover esta cara si otra cara se mueve" << endl;
		}
		else
		{
			cuboRubik.CaraEP = !cuboRubik.CaraEP;
		}
		break;
	}


}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}