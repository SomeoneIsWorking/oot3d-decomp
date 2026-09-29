// OoT3D decomp @ 003f6048  name=FUN_003f6048  size=396

void FUN_003f6048(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;

  uVar4 = DAT_003f61d8;
  uVar3 = DAT_003f61d4;
  iVar6 = (int)*(short *)(param_1 + 0x1c);
  uVar1 = (uint)(iVar6 << 0x1a) >> 0x1e;
  if (uVar1 == 0) {
    iVar6 = FUN_0036e864(param_2,(uint)(iVar6 << 0x12) >> 0x1a,param_3,param_4,param_4);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x1a4) = uVar3;
      *(undefined2 *)(param_1 + 0x21a) = 0x96;
      *(undefined2 *)(param_1 + 0x218) = 0x1e;
      *(undefined2 *)(param_1 + 0x21c) = 1;
    }
    goto LAB_003f61c0;
  }
  if (uVar1 == 1) {
    if (((*(byte *)(param_1 + 0x1b9) & 2) == 0) || ((*(byte *)(param_1 + 0x22a) & 2) != 0))
    goto LAB_003f61c0;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003f61d4;
    *(undefined2 *)(param_1 + 0x21a) = 0x96;
    *(undefined2 *)(param_1 + 0x218) = 0x1e;
    *(undefined2 *)(param_1 + 0x21c) = 1;
    iVar6 = FUN_0036e864(param_2,(uint)(iVar6 << 0x12) >> 0x1a,param_3,param_4,param_4);
    if (iVar6 == 0) goto LAB_003f61c0;
    FUN_0036beac(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
    uVar2 = *(ushort *)(param_1 + 0x1c);
joined_r0x003f61b0:
    if (((uint)uVar2 << 0x1a) >> 0x1e == 1) {
      FUN_0036a2dc(param_2,param_1,uVar4,0,0);
    }
  }
  else {
    if (uVar1 != 2) goto LAB_003f61c0;
    if ((*(byte *)(param_1 + 0x1b9) & 2) == 0) {
      if (9 < *(short *)(param_1 + 0x218)) {
        *(undefined4 *)(param_1 + 0x1a4) = DAT_003f61d4;
        *(undefined2 *)(param_1 + 0x21a) = 0x96;
        *(undefined2 *)(param_1 + 0x218) = 0x1e;
        *(undefined2 *)(param_1 + 0x21c) = 1;
        iVar6 = FUN_0036e864(param_2,(uint)(iVar6 << 0x12) >> 0x1a,param_3,param_4,param_4);
        if (iVar6 == 0) goto LAB_003f61c0;
        FUN_0036beac(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
        uVar2 = *(ushort *)(param_1 + 0x1c);
        goto joined_r0x003f61b0;
      }
      sVar5 = *(short *)(param_1 + 0x218) + 1;
    }
    else {
      sVar5 = 0;
    }
    *(short *)(param_1 + 0x218) = sVar5;
  }
LAB_003f61c0:
  *(short *)(param_1 + 0x226) = *(short *)(param_1 + 0x226) + *(short *)(param_1 + 0x228);
  return;
}
