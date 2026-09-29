// OoT3D decomp @ 003478d0  name=FUN_003478d0  size=232

undefined4 FUN_003478d0(int param_1)

{
  ushort uVar1;

  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 0x11:
    if ((*(ushort *)(DAT_003479e8 + 8) & 4) != 0) {
      *(undefined2 *)(param_1 + 0x1c) = 0x10;
      return 1;
    }
    return 0;
  default:
    goto switchD_003478dc_caseD_12;
  case 0x15:
    uVar1 = *(ushort *)(DAT_003479e8 + 8) & 8;
    break;
  case 0x16:
    uVar1 = *(ushort *)(DAT_003479e8 + 8) & 0x10;
    break;
  case 0x17:
    uVar1 = *(ushort *)(DAT_003479e8 + 8) & 0x20;
    break;
  case 0x18:
    uVar1 = *(ushort *)(DAT_003479e8 + 8) & 0x40;
    break;
  case 0x19:
    uVar1 = *(ushort *)(DAT_003479e8 + 8) & 0x80;
    break;
  case 0x1a:
    uVar1 = *(ushort *)(DAT_003479e8 + 8) & 0x100;
    break;
  case 0x1b:
    uVar1 = *(ushort *)(DAT_003479e8 + 8) & 0x200;
    break;
  case 0x1c:
    uVar1 = *(ushort *)(DAT_003479e8 + 8) & 0x400;
  }
  if (uVar1 != 0) {
    *(undefined2 *)(param_1 + 0x1c) = 0x26;
    return 1;
  }
switchD_003478dc_caseD_12:
  return 0;
}
