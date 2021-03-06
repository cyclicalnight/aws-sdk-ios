/*
 * Copyright 2010-2013 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */


#import "../AmazonServiceRequestConfig.h"



/**
 * Delete Load Balancer Policy Request
 */

@interface ElasticLoadBalancingDeleteLoadBalancerPolicyRequest:AmazonServiceRequestConfig

{
    NSString *loadBalancerName;
    NSString *policyName;
}



/**
 * The mnemonic name associated with the LoadBalancer. The name must be
 * unique within your AWS account.
 */
@property (nonatomic, retain) NSString *loadBalancerName;

/**
 * The mnemonic name for the policy being deleted.
 */
@property (nonatomic, retain) NSString *policyName;


/**
 * Default constructor for a new DeleteLoadBalancerPolicyRequest object.  Callers should use the
 * property methods to initialize this object after creating it.
 */
-(id)init;

/**
 * Constructs a new DeleteLoadBalancerPolicyRequest object.
 * Callers should use properties to initialize any additional object members.
 *
 * @param theLoadBalancerName The mnemonic name associated with the
 * LoadBalancer. The name must be unique within your AWS account.
 * @param thePolicyName The mnemonic name for the policy being deleted.
 */
-(id)initWithLoadBalancerName:(NSString *)theLoadBalancerName andPolicyName:(NSString *)thePolicyName;

/**
 * Returns a string representation of this object; useful for testing and
 * debugging.
 *
 * @return A string representation of this object.
 */
-(NSString *)description;


@end
