// OoT3D decomp @ 00442d98  name=FUN_00442d98  size=224

bool FUN_00442d98(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 local_1c;
  undefined4 local_18;

  iVar2 = DAT_00442f14;
  uVar1 = DAT_00442f10;
  iVar3 = 0;
  do {
    local_18 = uVar1;
    local_1c = uVar1;
    switch(iVar3) {
    case 0:
      break;
    case 1:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x12:
    case 0x13:
      local_1c = VectorSignedToFloat(*(int *)(iVar2 + 0x44) * -0x12,(byte)(in_fpscr >> 0x15) & 3);
      break;
    case 2:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
      local_1c = VectorSignedToFloat(*(int *)(iVar2 + 0x44) * 0x12,(byte)(in_fpscr >> 0x15) & 3);
      break;
    default:
      local_18 = VectorSignedToFloat(*(int *)(iVar2 + 0x44) * 10,(byte)(in_fpscr >> 0x15) & 3);
      break;
    case 0x10:
    case 0x14:
      local_18 = VectorSignedToFloat(*(int *)(iVar2 + 0x44) * -10,(byte)(in_fpscr >> 0x15) & 3);
    }
    FUN_002f9430(*(undefined4 *)(iVar2 + 0x14),&local_1c,1,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x32);
  iVar3 = *(int *)(iVar2 + 0x44) + 1;
  *(int *)(iVar2 + 0x44) = iVar3;
  return 4 < iVar3;
}
