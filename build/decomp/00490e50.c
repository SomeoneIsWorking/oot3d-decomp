// OoT3D decomp @ 00490e50  name=FUN_00490e50  size=76

/* WARNING: Removing unreachable block (ram,0x003102f0) */
/* WARNING: Removing unreachable block (ram,0x003102fc) */
/* WARNING: Removing unreachable block (ram,0x00310320) */
/* WARNING: Removing unreachable block (ram,0x0031036c) */
/* WARNING: Removing unreachable block (ram,0x00310374) */

void FUN_00490e50(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = param_1 + iRam00490e9c;
  uVar3 = uVar2;
  if (0x54 < uVar2) {
    uVar3 = 0;
  }
  if ((*(byte *)(iRam00490ea0 + uVar3) & 2) == 0) {
    if (0x54 < uVar2) {
      uVar2 = 0;
    }
    if ((*(byte *)(iRam00490ea0 + uVar2) & 4) == 0) {
      iVar4 = 0;
      goto FUN_003655d0;
    }
  }
  iVar4 = 1;
FUN_003655d0:
  piVar1 = *(int **)(iRam003655e8 + iVar4 * 4);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0031031c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x10))(piVar1);
    return;
  }
  return;
}

