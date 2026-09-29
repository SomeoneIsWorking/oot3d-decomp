// OoT3D decomp @ 004385e0  name=FUN_004385e0  size=196

bool FUN_004385e0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 local_1c;
  undefined4 local_18;

  iVar2 = DAT_0043871c;
  uVar1 = DAT_00438718;
  iVar3 = 0;
  do {
    local_18 = uVar1;
    local_1c = uVar1;
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
      local_1c = VectorSignedToFloat(*(int *)(iVar2 + 0x1c) * -0x28,(byte)(in_fpscr >> 0x15) & 3);
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
      local_1c = VectorSignedToFloat(*(int *)(iVar2 + 0x1c) * 0x28,(byte)(in_fpscr >> 0x15) & 3);
      break;
    default:
      local_18 = VectorSignedToFloat(*(int *)(iVar2 + 0x1c) * 10,(byte)(in_fpscr >> 0x15) & 3);
    }
    FUN_002f9430(*(undefined4 *)(iVar2 + 0xc),&local_1c,1,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x29);
  iVar3 = *(int *)(iVar2 + 0x1c) + 1;
  *(int *)(iVar2 + 0x1c) = iVar3;
  return 4 < iVar3;
}
