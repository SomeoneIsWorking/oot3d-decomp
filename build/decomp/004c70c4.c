// OoT3D decomp @ 004c70c4  name=FUN_004c70c4  size=248

/* WARNING: Removing unreachable block (ram,0x0036932c) */
/* WARNING: Removing unreachable block (ram,0x004c7b8c) */
/* WARNING: Removing unreachable block (ram,0x004c7b90) */
/* WARNING: Removing unreachable block (ram,0x004c7b94) */
/* WARNING: Removing unreachable block (ram,0x004c7b98) */

void FUN_004c70c4(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  cVar1 = *(char *)(param_1 + 0x1b6);
  iVar3 = *(int *)(param_1 + 0x1c4);
  uVar7 = (uint)(ushort)((*puRam004c71bc & *(ushort *)(iRam004c71c4 + 0x8a)) >> *psRam004c71c0);
  iVar6 = *(int *)(iRam004c71c4 + 4);
  cVar2 = *(char *)(iRam004c71c4 + 0x80);
  if (cVar1 == '\x12' || cVar1 == '\x13') {
    bVar8 = iVar6 == 0;
    bVar9 = uVar7 == 3;
    bVar10 = bVar8 && bVar9;
    if (bVar8 && bVar9) {
      uVar7 = *(uint *)(param_1 + 0x29b8);
    }
    iVar5 = (int)*(char *)(iRam004c71c8 + param_1);
    if (bVar8 && bVar9) {
      bVar10 = (uVar7 & 0x4000) == 0;
    }
    iVar4 = iVar3 + iVar5 * 0x10;
    if (bVar10) {
      iVar4 = iVar4 + 0x40;
    }
    else {
      if ((*(uint *)(param_1 + 0x29b8) & 0x80000) != 0) {
        iVar4 = iRam004c71cc + iVar5 * 0x10;
      }
      iVar3 = 0;
      if (iVar6 != 0) {
        iVar3 = iVar5 + -2;
      }
      if ((iVar3 < 0 != (iVar6 != 0 && SBORROW4(iVar5,2))) && (cVar2 != ';' && cVar2 != 'Y')) {
        iVar4 = iVar4 + 0x80;
      }
    }
    goto LAB_004c71a4;
  }
  if (iVar6 == 0) {
LAB_004c7178:
    if ((cVar1 == '\x10' && iVar6 == 0) && cVar2 == '=') {
      iVar4 = iVar3 + 0x10;
      goto LAB_004c71a4;
    }
  }
  else if (cVar1 == '\x10' || cVar1 == '\x11') {
    iVar4 = iRam004c71d0;
    if (cVar2 != ';') goto LAB_004c71a4;
    goto LAB_004c7178;
  }
  iVar4 = iVar3;
  if (((*(uint *)(param_1 + 0x29b8) & 0x80000) != 0) &&
     (uVar7 != 3 || (*(uint *)(param_1 + 0x29b8) & 0x4000) != 0)) {
    iVar4 = iRam004c71d4;
  }
LAB_004c71a4:
  iVar3 = *(int *)(iVar4 + *(int *)(iRam004c71d8 + 0x38) * 4);
  if (iVar3 != -1) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x27c) + 0x14);
    if (iVar3 < *(int *)(iVar6 + 0x68)) {
      *(undefined1 *)(*(int *)(iVar6 + 0x6c) + iVar3) = 1;
    }
    return;
  }
  return;
}

