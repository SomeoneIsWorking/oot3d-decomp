// OoT3D decomp @ 0029e0b4  name=FUN_0029e0b4  size=376

void FUN_0029e0b4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;

  FUN_003532e8(param_1,3);
  FUN_00372f38(param_1,param_2,param_1 + 0x294,2,0);
  FUN_00350eb8(param_2,param_1 + 0x1bc);
  FUN_00350d48(param_2,param_1 + 0x1bc,param_1,DAT_0029e22c,param_1 + 0x1dc);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  uVar1 = FUN_00353fd4(param_1,param_2,2);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  FUN_003510b0(param_1,DAT_0029e230);
  FUN_00372d4c(DAT_0029e23c,DAT_0029e234,param_1 + 0xbc,DAT_0029e238);
  fVar3 = *(float *)(param_1 + 0xc) + DAT_0029e240;
  *(float *)(param_1 + 0xc) = fVar3;
  *(float *)(param_1 + 0x2c) = fVar3;
  *(undefined1 *)(param_1 + 0x19b) = 2;
  iVar2 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x27c) = DAT_0029e248;
    FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x1c3,
                 (int)*(short *)(param_1 + 0xbc),(int)(short)(*(short *)(param_1 + 0xbe) + 0x1555),
                 (int)*(short *)(param_1 + 0xc0),0xffffffff);
    if (*(int *)(param_1 + 0x128) == 0) {
      FUN_00374428(param_1);
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x27c) = DAT_0029e244;
  *(undefined2 *)(param_1 + 0x284) = 0;
  *(undefined2 *)(param_1 + 0x288) = 0;
  return;
}
