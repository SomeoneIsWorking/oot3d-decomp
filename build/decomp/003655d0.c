// OoT3D decomp @ 003655d0  name=FUN_003655d0  size=220

void FUN_003655d0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint in_fpscr;
  float fVar3;
  int iVar4;
  float fVar5;
  
  piVar2 = *(int **)(iRam003655e8 + param_1 * 4);
  if (piVar2 == (int *)0x0) {
    return;
  }
  if (((param_2 != 0) && (*(char *)((int)piVar2 + 0x8a) == '\x02')) &&
     (*(char *)((int)piVar2 + 0x8b) != '\x02')) {
    fVar3 = (float)func_0x0030b44c(piVar2 + 0x19);
    iVar1 = iRam003103a0;
    fVar5 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    iVar4 = func_0x0030b44c(piVar2 + 0x19);
    piVar2[0x19] = iVar4;
    piVar2[0x1a] = iVar1;
    piVar2[0x1b] = (int)(fVar3 * fVar5);
    piVar2[0x1c] = 0;
    *(undefined1 *)(piVar2 + 0x26) = 0;
    if (piVar2[4] != 0) {
      func_0x0030c9e4(piVar2[4],piVar2);
    }
    (**(code **)(*piVar2 + 0x24))(piVar2);
    *(undefined1 *)((int)piVar2 + 0x87) = 0;
    *(undefined1 *)((int)piVar2 + 0x8b) = 0;
    *(undefined1 *)(piVar2 + 0x23) = 0;
    *(undefined1 *)(piVar2 + 0x22) = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0031031c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x10))(piVar2);
  return;
}

