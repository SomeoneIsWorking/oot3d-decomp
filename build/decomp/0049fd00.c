// OoT3D decomp @ 0049fd00  name=FUN_0049fd00  size=436

int FUN_0049fd00(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,short param_9,
                short param_10,short param_11,undefined4 param_12,short param_13)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_lr;

  FUN_004a3f68();
  do {
    iVar3 = FUN_004a4014();
  } while (iVar3 != 0);
  software_interrupt(0x19);
  uVar4 = *DAT_0049fe78 >> 0x1b;
  if ((*DAT_0049fe78 & 0x80000000) != 0) {
    uVar4 = uVar4 - 0x20;
  }
  if ((uVar4 != 0xfffffff9 && uVar4 != 0) && uVar4 != 1) {
    FUN_003351b4();
  }
  FUN_004a3f34(1);
  FUN_004a3f9c(param_3);
  FUN_004a3d7c(0);
  FUN_004a404c(param_5);
  FUN_002c1ab4(1);
  sVar1 = (short)param_1;
  FUN_004a4080((int)sVar1);
  FUN_004a3f00((int)(short)param_2);
  FUN_004a40b4(param_4);
  FUN_004a4124(0xff);
  FUN_004a3e58(param_6,param_1 * param_2,(int)sVar1,(int)param_9);
  sVar2 = (short)(param_1 / 2);
  iVar3 = (param_1 / 2) * (param_2 / 2);
  FUN_004a3db0(param_7,iVar3,(int)sVar2,(int)param_10);
  FUN_004a3e04(param_8,iVar3,(int)sVar2,(int)param_11);
  if (param_3 == 0) {
    iVar3 = 4;
  }
  else if (param_3 == 1) {
    iVar3 = 3;
  }
  else if (param_3 == 2 || param_3 == 3) {
    iVar3 = 2;
  }
  else {
    iVar3 = 0;
  }
  FUN_004a3eac(param_12,param_1 * param_2 * iVar3,(int)(short)(sVar1 * (short)iVar3 * 8),
               (int)(short)(param_13 * (short)iVar3 * 8));
  iVar3 = FUN_004bb360();
  if (iVar3 != DAT_004a400c) {
    if (iVar3 < 0) {
      FUN_0030e3ac(iVar3,&DAT_004a4010,0,&DAT_004a4010,unaff_r4,unaff_lr);
      FUN_002fb928(0);
    }
    iVar3 = 0;
  }
  return iVar3;
}
