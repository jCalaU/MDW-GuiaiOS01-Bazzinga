//
//  ViewController.h
//  MDW-Guia-iOS01
//
//  Created by Javier Cala Uribe on 19/10/11.
//  Copyright (c) 2011 *. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    UILabel *miEtiqueta;
}

@property (nonatomic, retain) IBOutlet UILabel *miEtiqueta;

- (IBAction)cambiarEtiqueta:(id)sender;

@end
