// OoT3D decomp @ 002fae00  name=FUN_002fae00  size=16

/* WARNING: Removing unreachable block (ram,0x002faea4) */
/* WARNING: Removing unreachable block (ram,0x002faeb4) */
/* WARNING: Removing unreachable block (ram,0x002faeb8) */
/* WARNING: Removing unreachable block (ram,0x002faebc) */
/* WARNING: Removing unreachable block (ram,0x002faec8) */

undefined4 * FUN_002fae00(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;

  iVar2 = param_1[10];
  iVar3 = param_1[4];
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      param_1 = (undefined4 *)(iVar2 + iVar4 * 8);
      piVar5 = (int *)*param_1;
      if (piVar5 != (int *)0x0) {
        param_1 = (undefined4 *)(uint)*(byte *)(param_1 + 1);
        if (param_1 == (undefined4 *)0x0) {
          param_1 = (undefined4 *)0x0;
          if (*(char *)((int)piVar5 + 0xad) != '\0') {
            param_1 = (undefined4 *)FUN_0030f4d0(piVar5[5],0);
          }
        }
        else if (((param_1 == (undefined4 *)0x1) && (param_1 = (undefined4 *)0x0, piVar5[0x5c] != 0)
                 ) && (iVar1 = FUN_002ea854(piVar5), param_1 = (undefined4 *)0x0, iVar1 != 0)) {
          param_1 = (undefined4 *)(**(code **)(*piVar5 + 0xc))(piVar5);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return param_1;
}
