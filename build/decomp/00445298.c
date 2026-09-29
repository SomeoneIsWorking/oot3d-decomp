// OoT3D decomp @ 00445298  name=FUN_00445298  size=196

bool FUN_00445298(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 local_1c;
  undefined4 local_18;

  iVar2 = DAT_004453c4;
  uVar1 = DAT_004453c0;
  iVar3 = 0;
  do {
    local_18 = uVar1;
    local_1c = uVar1;
    switch(iVar3) {
    case 0:
    case 1:
      local_1c = VectorSignedToFloat(*(int *)(iVar2 + 0x60) * -0x28,(byte)(in_fpscr >> 0x15) & 3);
      break;
    default:
      local_18 = VectorSignedToFloat(*(int *)(iVar2 + 0x60) * 10,(byte)(in_fpscr >> 0x15) & 3);
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
      local_1c = VectorSignedToFloat(*(int *)(iVar2 + 0x60) * 10,(byte)(in_fpscr >> 0x15) & 3);
    }
    FUN_002f9430(*(undefined4 *)(iVar2 + 0x24),&local_1c,1,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x25);
  iVar3 = *(int *)(iVar2 + 0x60) + 1;
  *(int *)(iVar2 + 0x60) = iVar3;
  return 4 < iVar3;
}
