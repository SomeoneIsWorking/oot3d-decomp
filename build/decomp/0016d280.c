// OoT3D decomp @ 0016d280  name=FUN_0016d280  size=516

void FUN_0016d280(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  uint *puVar3;
  undefined1 uVar4;
  int iVar5;
  ushort uVar6;

  iVar5 = FUN_003769d8(param_2 + 0x28a0);
  puVar3 = DAT_0016d4a0;
  if (*(short *)(param_1 + 0x1c) == 10 && iVar5 == 4) {
    if ((*(uint *)(param_2 + 0x18) & *DAT_0016d4a0) != 0) goto switchD_0016d338_caseD_4;
    iVar5 = FUN_00346964(param_2);
    if (iVar5 != 0) {
      iVar5 = FUN_00369f3c(param_2);
      if (iVar5 == 0) goto LAB_0016d48c;
      if (iVar5 == 1) goto switchD_0016d338_caseD_4;
    }
  }
  else if ((iVar5 == 5) && (iVar5 = FUN_00346964(param_2), iVar5 != 0)) {
    FUN_0037547c(DAT_0016d4ac,0,4,DAT_0016d4a8,DAT_0016d4a8,DAT_0016d4a4);
    switch((uint)*(byte *)(param_1 + 0x28f)) {
    case 0:
    case 1:
    case 2:
    case 3:
      goto switchD_0016d338_caseD_0;
    case 5:
      FUN_003716f0(param_2,DAT_0016d4cc,0x14,0x2e);
      return;
    case 6:
      FUN_0036be34(param_2,DAT_0016d4b0);
      *(undefined2 *)(param_1 + 0x2a0) = 0x19;
      return;
    default:
      if ((*(uint *)(param_2 + 0x18) & *puVar3) == 0) {
LAB_0016d48c:
        *(undefined2 *)(param_1 + 0x2a0) = 2;
        if (*(short *)(param_1 + 0x1c) == 10) {
          uVar6 = *(ushort *)(DAT_00355f44 + 0xe);
          if ((((uVar6 & 0x100) == 0 || (uVar6 & 0x200) == 0) || (uVar6 & 0x400) == 0) ||
              (uVar6 & 0x800) == 0) {
            FUN_0036be34(param_2,DAT_00355f4c);
          }
          else {
            FUN_0036be34(param_2,DAT_00355f48);
          }
        }
        else {
          FUN_0036be34(param_2,0x83);
        }
        *(undefined4 *)(param_1 + 0x368) = 1;
        *(undefined4 *)(param_1 + 0x330) = 1;
        FUN_0034e32c(DAT_00355f50,param_1,param_2);
        return;
      }
    case 4:
switchD_0016d338_caseD_4:
      FUN_0034e1d0(param_2,param_1);
      return;
    }
  }
  return;
switchD_0016d338_caseD_0:
  sVar2 = *(short *)(DAT_0016d4b8 + (uint)*(byte *)(param_1 + 0x28f) * 2);
  if (*(short *)(DAT_0016d4b4 + 0x48) < sVar2) {
    FUN_0036be34(param_2,DAT_0016d4bc);
    uVar4 = 5;
    *(undefined1 *)(param_1 + 0x290) = 1;
    goto LAB_0016d43c;
  }
  FUN_00376a60((int)-sVar2);
  cVar1 = *(char *)(param_1 + 0x28f);
  if (cVar1 == '\x03') {
    *(ushort *)(DAT_0016d4c0 + 0xfc) = *(ushort *)(DAT_0016d4c0 + 0xfc) | 0x8000;
    FUN_0036be34(param_2,DAT_0016d4c4);
    *(undefined1 *)(param_1 + 0x28f) = 6;
    return;
  }
  if (cVar1 == '\0') {
    *(ushort *)(DAT_0016d4c0 + 0xfc) = *(ushort *)(DAT_0016d4c0 + 0xfc) | 0x1000;
  }
  else {
    if (cVar1 == '\x01') {
      uVar6 = *(ushort *)(DAT_0016d4c0 + 0xfc) | 0x4000;
    }
    else {
      if (cVar1 != '\x02') goto LAB_0016d42c;
      uVar6 = *(ushort *)(DAT_0016d4c0 + 0xfc) | 0x2000;
    }
    *(ushort *)(DAT_0016d4c0 + 0xfc) = uVar6;
  }
LAB_0016d42c:
  FUN_0036be34(param_2,DAT_0016d4c8);
  uVar4 = 8;
LAB_0016d43c:
  *(undefined1 *)(param_1 + 0x28f) = uVar4;
  *(undefined2 *)(param_1 + 0x2a0) = 1;
  return;
}
