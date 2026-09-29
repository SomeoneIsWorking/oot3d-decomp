// OoT3D decomp @ 002eb4e4  name=FUN_002eb4e4  size=216

void FUN_002eb4e4(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 local_1c;
  undefined4 local_18;

  uVar2 = DAT_002eb624;
  iVar1 = DAT_002eb620;
  iVar3 = 0;
  *(undefined4 *)(DAT_002eb620 + 0x84) = 0xffffffff;
  do {
    local_18 = uVar2;
    local_1c = uVar2;
    switch(iVar3) {
    case 0:
    case 1:
      local_1c = VectorSignedToFloat(*(int *)(iVar1 + 0x60) * -0x28,(byte)(in_fpscr >> 0x15) & 3);
      break;
    default:
      local_18 = VectorSignedToFloat(*(int *)(iVar1 + 0x60) * 10,(byte)(in_fpscr >> 0x15) & 3);
      break;
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      local_1c = VectorSignedToFloat(*(int *)(iVar1 + 0x60) * 10,(byte)(in_fpscr >> 0x15) & 3);
    }
    FUN_002f9430(*(undefined4 *)(iVar1 + 0x24),&local_1c,1,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x25);
  iVar3 = *(int *)(iVar1 + 0x60) + -1;
  *(int *)(iVar1 + 0x60) = iVar3;
  if (iVar3 < 0) {
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 0x84) = 1;
  }
  return;
}
