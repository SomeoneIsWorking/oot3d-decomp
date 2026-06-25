// OoT3D decomp @ 004c64c4  name=FUN_004c64c4  size=288

void FUN_004c64c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_30;
  
  if (param_6 < 4) {
    *(undefined *)(*(int *)(param_5 + 0x528) + 0x6c) = 1;
    uVar1 = *(undefined4 *)(param_5 + 0x528);
    iVar2 = param_6 + 1;
  }
  else {
    *(undefined *)(*(int *)(param_5 + 0x528) + 0x6c) = 0;
    uVar1 = *(undefined4 *)(param_5 + 0x528);
    iVar2 = 1;
  }
  FUN_00344670(uVar1,iVar2);
  iVar2 = *(int *)(param_5 + 0x528);
  if (param_7 == 0) {
    *(undefined4 *)(iVar2 + 0x80) = param_3;
    *(undefined4 *)(iVar2 + 0x84) = param_4;
    FUN_00305950(*(undefined4 *)(param_5 + 0x528),0);
    *(undefined4 *)(param_5 + 0x938) = param_3;
    *(undefined4 *)(param_5 + 0x93c) = param_4;
    *(undefined4 *)(param_5 + 0x940) = param_3;
    uVar1 = DAT_004c65e8;
    *(undefined4 *)(param_5 + 0x944) = param_4;
    *(undefined4 *)(param_5 + 0x948) = uVar1;
    *(undefined4 *)(param_5 + 0x94c) = param_3;
    *(undefined4 *)(param_5 + 0x950) = *(undefined4 *)(param_5 + 0x944);
  }
  else {
    *(undefined4 *)(iVar2 + 0x80) = param_1;
    *(undefined4 *)(iVar2 + 0x84) = param_2;
    iVar2 = *(int *)(param_5 + 0x528);
    uVar1 = FUN_00305980(param_5 + 0x924,1,&local_30);
    FUN_00305950(iVar2,uVar1,local_30);
    uVar1 = DAT_004c65e4;
    *(undefined *)(iVar2 + 0x14) = 1;
    *(undefined4 *)(iVar2 + 0x18) = uVar1;
    *(undefined4 *)(param_5 + 0x938) = param_1;
    *(undefined4 *)(param_5 + 0x93c) = param_2;
    *(undefined4 *)(param_5 + 0x940) = param_3;
    *(undefined4 *)(param_5 + 0x944) = param_4;
    *(undefined4 *)(param_5 + 0x948) = uVar1;
    *(undefined4 *)(param_5 + 0x94c) = *(undefined4 *)(param_5 + 0x940);
    *(undefined4 *)(param_5 + 0x950) = *(undefined4 *)(param_5 + 0x944);
  }
  *(int *)(param_5 + 0x120) = param_6;
  return;
}

