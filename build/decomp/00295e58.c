// OoT3D decomp @ 00295e58  name=FUN_00295e58  size=340

void FUN_00295e58(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;

  fVar2 = DAT_00295fbc;
  iVar5 = *(int *)(DAT_00295fb4 + param_2);
  FUN_0036e168(*(float *)(iVar5 + 0x2c) + DAT_00295fb8,DAT_00295fc4,DAT_00295fc0,param_1 + 0x2c);
  FUN_0037547c(DAT_00295fd0,param_1 + 0x28,4,DAT_00295fcc,DAT_00295fcc,DAT_00295fc8);
  if (((*(byte *)(param_1 + 0x4d0) & 2) != 0) &&
     (*(byte *)(param_1 + 0x4d0) = *(byte *)(param_1 + 0x4d0) & 0xfd,
     *(int *)(param_1 + 0x4c4) == iVar5)) {
    *(undefined2 *)(param_1 + 0x4a6) = 2;
  }
  if (*(short *)(param_1 + 0x4ac) < 0xff) {
    *(short *)(param_1 + 0x4ac) = *(short *)(param_1 + 0x4ac) + 0xf;
  }
  fVar6 = (float)FUN_00340698(*(undefined4 *)(param_1 + 0x4b4));
  fVar3 = DAT_00295fd4;
  if (fVar6 != fVar2) {
    fVar7 = (float)FUN_00340698(*(undefined4 *)(param_1 + 0x4b4));
    fVar6 = DAT_00295fd8;
    *(float *)(param_1 + 0x2c) =
         *(float *)(param_1 + 0x2c) + fVar7 * (*(float *)(param_1 + 0x4bc) + fVar3);
    uVar4 = DAT_00295fdc;
    *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4b4) + fVar6;
    FUN_0036e168(DAT_00295fe0,uVar4,fVar6,fVar2,param_1 + 0x6c);
    sVar1 = *(short *)(param_1 + 0x4a6) + -1;
    *(short *)(param_1 + 0x4a6) = sVar1;
    if (sVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1a4) = 9;
      *(undefined4 *)(param_1 + 0x1ac) = DAT_00295fe8;
      return;
    }
    FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),1,DAT_00295fe4,0);
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
