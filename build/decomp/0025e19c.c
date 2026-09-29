// OoT3D decomp @ 0025e19c  name=FUN_0025e19c  size=348

void FUN_0025e19c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  undefined4 local_18;

  local_18 = *DAT_0025e2f8;
  FUN_003510b0(param_1,&local_18);
  uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x1ac,6,param_1 + 0x1b0,7,0);
  uVar3 = FUN_00372f0c(uVar2,1);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1ac) + 0xc),uVar3);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1ac) + 0xc) + 0x10) = 1;
  uVar2 = FUN_00372f0c(uVar2,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0xc),uVar2);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1b0) + 0xc) + 0x10) = 1;
  iVar4 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
  if (iVar4 == 0) {
    *(undefined1 *)(param_1 + 0x1a8) = 0;
  }
  else {
    fVar5 = *(float *)(param_1 + 0xc) - DAT_0025e2fc;
    *(float *)(param_1 + 0xc) = fVar5;
    *(float *)(param_1 + 0x2c) = fVar5;
    *(undefined1 *)(param_1 + 0x1a8) = 1;
  }
  *(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2) =
       (short)(int)*(float *)(param_1 + 0x2c) + -8;
  iVar4 = 1;
  do {
    *(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + iVar4 * 0x10 + 2) =
         (short)(int)*(float *)(param_1 + 0x2c) + -8;
    iVar1 = iVar4 * 0x10;
    iVar4 = iVar4 + 2;
    *(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + iVar1 + 0x12) =
         (short)(int)*(float *)(param_1 + 0x2c) + -8;
  } while (iVar4 < 9);
  *(undefined4 *)(param_1 + 0x1a4) = DAT_0025e300;
  return;
}
