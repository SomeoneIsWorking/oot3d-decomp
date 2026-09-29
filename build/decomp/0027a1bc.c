// OoT3D decomp @ 0027a1bc  name=FUN_0027a1bc  size=128

void FUN_0027a1bc(int param_1,int param_2)

{
  byte bVar1;

  FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  switch(*(ushort *)(param_1 + 0x1c) >> 0xc) {
  case 3:
  case 4:
  case 5:
  case 6:
    if ((*(byte *)(param_1 + 0x1d4) & 2) == 0) goto switchD_0027a1ec_default;
    bVar1 = *DAT_0027a250 & 0xfd;
    break;
  case 7:
    if ((*(byte *)(param_1 + 0x1d4) & 1) == 0) goto switchD_0027a1ec_default;
    bVar1 = *DAT_0027a250 & 0xfe;
    break;
  default:
    goto switchD_0027a1ec_default;
  }
  *DAT_0027a250 = bVar1;
switchD_0027a1ec_default:
  FUN_00350f34(param_1,param_1 + 0x1e4,param_1 + 0x1e8,0);
  return;
}
