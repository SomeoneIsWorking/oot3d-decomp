// OoT3D decomp @ 0018ea0c  name=FUN_0018ea0c  size=400

void FUN_0018ea0c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  uint in_fpscr;
  undefined4 uVar3;
  float fVar4;

  FUN_00372f38(param_1,param_2,0);
  FUN_003510b0(param_1,DAT_0018eb9c);
  uVar1 = DAT_0018eba8;
  uVar3 = DAT_0018eba4;
  *(undefined4 *)(param_1 + 0xa0) = DAT_0018eba0;
  FUN_00372d4c(uVar3,uVar3,param_1 + 0xbc,uVar1);
  uVar3 = DAT_0018ebac;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0xb6) = 0xfe;
  *(undefined1 *)(param_1 + 0xb7) = 2;
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,3,param_1 + 0x228,param_1 + 0x80c,0x1d);
  *(undefined1 *)(param_1 + 0x123) = 0x55;
  FUN_00350eb8(param_2,param_1 + 0xe10);
  FUN_00350d48(param_2,param_1 + 0xe10,param_1,DAT_0018ebb0,param_1 + 0xe30);
  fVar2 = DAT_0018ebb8;
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
  FUN_0037572c((DAT_0018ebb8 + fVar4 * DAT_0018ebb4) * DAT_0018ebbc,param_1);
  uVar3 = VectorSignedToFloat(*(short *)(param_1 + 0x1c) + 10,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(*(int *)(param_1 + 0xe2c) + 0x44) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0xe2c) + 0x34) = uVar3;
  uVar3 = VectorSignedToFloat(*(short *)(param_1 + 0x1c) * 2 + 0x14,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(*(int *)(param_1 + 0xe2c) + 0x94) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0xe2c) + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x2c);
  FUN_0037422c(fVar2,param_1 + 0x1a4,3);
  *(undefined1 *)(param_1 + 0xdf0) = 0;
  uVar3 = DAT_0018ebc0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  FUN_00375bcc(param_1,uVar3);
  *(undefined4 *)(param_1 + 0xdf4) = DAT_0018ebc4;
  return;
}
