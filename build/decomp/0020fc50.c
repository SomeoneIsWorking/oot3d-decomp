// OoT3D decomp @ 0020fc50  name=FUN_0020fc50  size=268

void FUN_0020fc50(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;

  *(undefined1 *)(param_1 + 0x19a) = 1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(ushort *)(param_1 + 0x1c2) = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(ushort *)(param_1 + 0x1c4) = *(ushort *)(param_1 + 0x1c) >> 8;
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x1c0) = 0xffff;
  switch(*(undefined2 *)(param_1 + 0x1c2)) {
  case 0:
  case 5:
  case 0x14:
  case 0x19:
    uVar3 = 0xbf;
    break;
  case 1:
  case 6:
    uVar3 = 0xbd;
    break;
  case 2:
  case 7:
    uVar3 = 0xd9;
    break;
  case 3:
  case 8:
    uVar3 = 0xce;
    break;
  case 4:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    uVar3 = (undefined2)DAT_0020fdc4;
    break;
  case 0xf:
    *(undefined4 *)(param_1 + 0x1b4) = DAT_0020fdc8;
    *(undefined2 *)(param_1 + 0x1ca) = 0xb;
    uVar1 = DAT_0020fdd0;
    *(undefined4 *)(param_1 + 100) = DAT_0020fdcc;
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
    goto switchD_0020fcb0_caseD_15;
  case 0x10:
  case 0x11:
  case 0x12:
    uVar3 = (undefined2)DAT_0020fdd4;
    break;
  case 0x13:
    *(short *)(param_1 + 0x1c0) = (short)DAT_0020fdd8;
  default:
    goto switchD_0020fcb0_caseD_15;
  }
  *(undefined2 *)(param_1 + 0x1c0) = uVar3;
switchD_0020fcb0_caseD_15:
  if (-1 < *(short *)(param_1 + 0x1c0)) {
    cVar2 = FUN_00363c10(param_2 + 0x3a58);
    iVar4 = (int)cVar2;
    *(char *)(param_1 + 0x1d2) = cVar2;
    iVar5 = iVar4;
    if (iVar4 < 0) {
      iVar5 = param_1;
    }
    *(undefined4 *)(param_1 + 0x140) = 0;
    if (iVar4 < 0) {
      *(undefined4 *)(iVar5 + 0x140) = 0;
      *(undefined4 *)(iVar5 + 0x13c) = 0;
      *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) & 0xfffffffe;
      return;
    }
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0020fddc;
  }
  return;
}
