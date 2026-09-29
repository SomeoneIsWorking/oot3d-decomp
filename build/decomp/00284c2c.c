// OoT3D decomp @ 00284c2c  name=FUN_00284c2c  size=628

void FUN_00284c2c(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(ushort *)(param_1 + 0x1ac) = *(ushort *)(param_1 + 0x1c) >> 0xb;
  *(ushort *)(param_1 + 0x1ae) = (ushort)(((uint)*(ushort *)(param_1 + 0x1c) << 0x15) >> 0x1b);
  uVar4 = *(ushort *)(param_1 + 0x1c) & 0x3f;
  *(ushort *)(param_1 + 0x1ba) = uVar4;
  if (uVar4 == 0x3f) {
    *(undefined2 *)(param_1 + 0x1ba) = 0xffff;
  }
  *(undefined1 *)(param_1 + 0x1f) = 1;
  if ((-1 < *(short *)(param_1 + 0x1ba)) && (iVar2 = FUN_0036e864(param_2), iVar2 != 0)) {
switchD_00284cb0_default:
    FUN_00374428(param_1);
    return;
  }
  uVar6 = DAT_00284f04;
  uVar5 = DAT_00284ed4;
  switch(*(undefined2 *)(param_1 + 0x1ac)) {
  case 0:
    sVar1 = 0;
    *(ushort *)(param_1 + 0x1b0) = *(ushort *)(param_1 + 0x38) & 0xf;
    if (9 < *(short *)(param_1 + 0x38)) {
      sVar1 = (short)((uint)(*(short *)(param_1 + 0x38) * DAT_00284ec8) >> 0x10);
      sVar1 = (sVar1 >> 2) - (sVar1 >> 0xf);
      *(short *)(param_1 + 0x1c2) = sVar1 * 0x14;
    }
    *(short *)(param_1 + 0x1b0) = *(short *)(param_1 + 0x38) + sVar1 * -10;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00284ecc;
    return;
  case 1:
    puVar3 = (undefined4 *)(DAT_00284ed0 + (*(ushort *)(param_1 + 0x38) & 0xff) * 0xc);
    uVar5 = *(undefined4 *)(param_1 + 0x2c);
    uVar6 = *(undefined4 *)(param_1 + 0x30);
    *puVar3 = *(undefined4 *)(param_1 + 0x28);
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    FUN_00374428(param_1);
    return;
  case 2:
    *(ushort *)(param_1 + 0x1b2) = *(ushort *)(param_1 + 0x38) & 0xff;
    *(undefined4 *)(param_1 + 0x1a4) = uVar5;
    return;
  case 3:
    uVar4 = *(ushort *)(param_1 + 0x38);
    FUN_00353dd0(param_2,param_1 + 0x1d8);
    FUN_00353d24(param_2,param_1 + 0x1d8,param_1,DAT_00284ed8);
    uVar5 = DAT_00284ee0;
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(DAT_00284edc + (uVar4 & 0xff) * 4);
    *(undefined4 *)(param_1 + 0x218) = uVar5;
    uVar5 = DAT_00284ee8;
    *(undefined4 *)(param_1 + 0x21c) = DAT_00284ee4;
    break;
  case 4:
    return;
  case 5:
    sVar1 = 0;
    *(ushort *)(param_1 + 0x1b0) = *(ushort *)(param_1 + 0x38) & 0xf;
    if (9 < *(short *)(param_1 + 0x38)) {
      sVar1 = (short)((uint)(*(short *)(param_1 + 0x38) * DAT_00284ec8) >> 0x10);
      sVar1 = (sVar1 >> 2) - (sVar1 >> 0xf);
      *(short *)(param_1 + 0x1c2) = sVar1 * 0x14;
    }
    *(short *)(param_1 + 0x1b0) = *(short *)(param_1 + 0x38) + sVar1 * -10;
    uVar5 = DAT_00284eec;
    break;
  case 6:
    puVar3 = (undefined4 *)(DAT_00284ef0 + (*(ushort *)(param_1 + 0x38) & 0xff) * 0xc);
    uVar5 = *(undefined4 *)(param_1 + 0x2c);
    uVar6 = *(undefined4 *)(param_1 + 0x30);
    *puVar3 = *(undefined4 *)(param_1 + 0x28);
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    FUN_00374428(param_1);
    return;
  case 7:
    uVar5 = DAT_00284ef4;
    break;
  case 8:
    FUN_00353dd0(param_2,param_1 + 0x1d8);
    FUN_00353d24(param_2,param_1 + 0x1d8,param_1,DAT_00284ed8);
    *(undefined4 *)(param_1 + 0x1f8) = 4;
    uVar5 = DAT_00284ef8;
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x218) = uVar5;
    uVar5 = DAT_00284f00;
    *(undefined4 *)(param_1 + 0x21c) = DAT_00284efc;
    break;
  case 9:
    *(ushort *)(param_1 + 0x1b2) = *(ushort *)(param_1 + 0x38) & 0xff;
    *(undefined4 *)(param_1 + 0x1a4) = uVar6;
    return;
  default:
    goto switchD_00284cb0_default;
  }
  *(undefined4 *)(param_1 + 0x1a4) = uVar5;
  return;
}
