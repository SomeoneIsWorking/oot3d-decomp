// OoT3D decomp @ 00360d9c  name=FUN_00360d9c  size=432

void FUN_00360d9c(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  uVar3 = 100;
  if (*(short *)(param_1 + 0x9a8) == 8) {
    uVar3 = 0;
  }
  if ((*(ushort *)(param_1 + 0x9c4) & 0x20) == 0) {
    uVar7 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x30),
                                (byte)(in_fpscr >> 0x15) & 3);
    uVar6 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x2c),
                                (byte)(in_fpscr >> 0x15) & 3);
    uVar5 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x28),
                                (byte)(in_fpscr >> 0x15) & 3);
    FUN_003591e4(uVar5,uVar6,uVar7,param_1 + 0x964,0xff,0xff,0xff,0,0);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x20ac);
    uVar6 = VectorSignedToFloat((int)(short)(int)*(float *)(iVar2 + 0x30),
                                (byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar2 + 0x2c),
                                       (byte)(in_fpscr >> 0x15) & 3);
    uVar5 = VectorSignedToFloat((int)(short)(int)*(float *)(iVar2 + 0x28),
                                (byte)(in_fpscr >> 0x15) & 3);
    FUN_003591e4(uVar5,fVar4 + DAT_00360f4c,uVar6,param_1 + 0x964,0xff,0xff,0xff,200,1);
  }
  if ((*(ushort *)(param_1 + 0x9c4) & 0x800) == 0) {
    FUN_0036f410(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_1 + 0x948,0xff,0xff,0xff,uVar3,1);
  }
  else {
    FUN_00190c2c();
  }
  uVar1 = FUN_003758b0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x60));
  *(undefined2 *)(param_1 + 0x9bc) = uVar1;
  FUN_0037572c(*(undefined4 *)(param_1 + 0x54),param_1);
  if (*(float *)(param_1 + 0x54) != DAT_00360f50) {
    FUN_003731e0(param_1 + 0x1a4);
    return;
  }
  return;
}
