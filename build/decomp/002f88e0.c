// OoT3D decomp @ 002f88e0  name=FUN_002f88e0  size=216

void FUN_002f88e0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 local_1c;
  undefined4 local_18;

  uVar2 = DAT_002f8a30;
  iVar1 = DAT_002f8a2c;
  iVar3 = 0;
  *(undefined4 *)(DAT_002f8a2c + 0x3c) = 0xffffffff;
  do {
    local_18 = uVar2;
    local_1c = uVar2;
    switch(iVar3) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0x1c:
      local_1c = VectorSignedToFloat(*(int *)(iVar1 + 0x1c) * -0x28,(byte)(in_fpscr >> 0x15) & 3);
      break;
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
      local_1c = VectorSignedToFloat(*(int *)(iVar1 + 0x1c) * 0x28,(byte)(in_fpscr >> 0x15) & 3);
      break;
    default:
      local_18 = VectorSignedToFloat(*(int *)(iVar1 + 0x1c) * 10,(byte)(in_fpscr >> 0x15) & 3);
    }
    FUN_002f9430(*(undefined4 *)(iVar1 + 0xc),&local_1c,1,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x29);
  iVar3 = *(int *)(iVar1 + 0x1c) + -1;
  *(int *)(iVar1 + 0x1c) = iVar3;
  if (iVar3 < 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 1;
  }
  return;
}
