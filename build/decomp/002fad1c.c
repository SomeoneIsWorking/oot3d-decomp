// OoT3D decomp @ 002fad1c  name=FUN_002fad1c  size=16

/* WARNING: Removing unreachable block (ram,0x002fadc0) */
/* WARNING: Removing unreachable block (ram,0x002fadd0) */
/* WARNING: Removing unreachable block (ram,0x002fadd4) */
/* WARNING: Removing unreachable block (ram,0x002fadd8) */
/* WARNING: Removing unreachable block (ram,0x002fade4) */

undefined4 * FUN_002fad1c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  iVar1 = param_1[10];
  iVar2 = param_1[4];
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      param_1 = (undefined4 *)(iVar1 + iVar3 * 8);
      piVar4 = (int *)*param_1;
      if (piVar4 != (int *)0x0) {
        param_1 = (undefined4 *)(uint)*(byte *)(param_1 + 1);
        if (param_1 == (undefined4 *)0x0) {
          param_1 = (undefined4 *)0x0;
          if (*(char *)((int)piVar4 + 0xad) != '\0') {
            param_1 = (undefined4 *)FUN_0030f4d0(piVar4[5],1);
          }
        }
        else if (((param_1 == (undefined4 *)0x1) && (param_1 = (undefined4 *)0x0, piVar4[0x5c] != 0)
                 ) && (param_1 = (undefined4 *)FUN_002ea854(piVar4), param_1 == (undefined4 *)0x0))
        {
          param_1 = (undefined4 *)(**(code **)(*piVar4 + 0xc))(piVar4);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return param_1;
}
