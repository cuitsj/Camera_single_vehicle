/*!
 *     COPYRIGHT NOTICE
 *     Copyright (c) 2013,山外科技
 *     All rights reserved.
 *     技术讨论：山外论坛 http://www.vcan123.com
 *
 *     除注明出处外，以下所有内容版权均属山外科技所有，未经允许，不得用于商业用途，
 *     修改内容时必须保留山外科技的版权声明。
 *
 * @file       VCAN_key_event.h
 * @brief      KEY 事件函数实现
 * @author     山外科技
 * @version    v5.0
 * @date       2014-01-04
 */

#include "VCAN_key_event.h"
#include "VCAN_UI_VAR.h"
//#include "NRF24L0.h"
//#include "NRF24L0_MSG.h"


void key_event_init()
{
    //初始化 全部 按键
    key_init(KEY_MAX);

    //初始化临时变量
    var_init();

    //同步全部数据并显示
    //var_syn(VAR_MAX);       //同步全部 ,必须先同步再显示全部，因为有可能同步失败。
    //var_display(VAR_MAX);   //显示全部
}

void deal_key_event()
{
    KEY_MSG_t keymsg;

    while(get_key_msg(& keymsg))     //获得按键就进行处理
    {
        if(keymsg.status == KEY_DOWN)
        {
            switch(keymsg.key)
            {
            case KEY_U:
                
                break;

            case KEY_D:
                
                break;

            case KEY_L:
                
                break;

            case KEY_R:
                
                break;

            case KEY_B:
                
                break;

            case KEY_A:
                
                break;
            default:
                break;
            }
        }
        else if(keymsg.status == KEY_HOLD)
        {
            switch(keymsg.key)
            {
            case KEY_U:
                
                break;

            case KEY_D:
                
                break;

            case KEY_L:
                
                break;

            case KEY_R:
                
                break;

            case KEY_B:                //长按 OK 键 同步全部数据并显示
                
                break;
     
            default:            //不需要处理 cancel
                break;
            }
        }
        else
        {
            //KEY_UP ,不进行处理
        }
    }
}





