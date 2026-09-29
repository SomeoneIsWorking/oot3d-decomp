// OoT3D decomp @ 00394830  name=FUN_00394830  size=404

void FUN_00394830(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;

  FUN_00372f38(param_1,param_2,param_1 + 0x230,
               *(undefined4 *)(DAT_003949c4 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 4),0);
  iVar3 = DAT_003949c8;
  uVar1 = *(uint *)(DAT_003949c8 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 4);
  if (0x7fffffff < uVar1) {
    *(undefined4 *)(param_1 + 0x1a4) = 0xffffffff;
  }
  if (-1 < (int)uVar1) {
    FUN_003532e8(param_1,0);
    uVar2 = FUN_00353fd4(param_1,param_2,
                         *(undefined4 *)(iVar3 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 4));
    uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
    *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  }
  if ((((int)*(short *)(param_1 + 0x1c) & 0xffU) < 5) &&
     (iVar3 = FUN_0036e864(param_2,(uint)((int)*(short *)(param_1 + 0x1c) << 0x12) >> 0x1a),
     iVar3 == 0)) {
    FUN_003510b0(param_1,DAT_003949cc);
    FUN_0037572c(DAT_003949d0,param_1);
    FUN_00350eb8(param_2,param_1 + 0x1bc);
    FUN_00350d48(param_2,param_1 + 0x1bc,param_1,DAT_003949d4,param_1 + 0x1dc);
    iVar3 = DAT_003949d8;
    iVar4 = DAT_003949d8 + 10;
    uVar2 = VectorSignedToFloat((int)*(short *)(DAT_003949d8 +
                                               (*(ushort *)(param_1 + 0x1c) & 0xff) * 2),
                                (byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(*(int *)(param_1 + 0x1d8) + 0x34) = uVar2;
    uVar2 = VectorSignedToFloat((int)*(short *)(iVar4 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 2),
                                (byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(*(int *)(param_1 + 0x1d8) + 0x2c) = uVar2;
    *(float *)(param_1 + 0x2c) =
         *(float *)(param_1 + 0xc) +
         *(float *)(iVar3 + 0x14 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 4);
    *(undefined1 *)(param_1 + 0x19b) = 2;
    return;
  }
  FUN_00374428(param_1);
  return;
}
