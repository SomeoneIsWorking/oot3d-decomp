// OoT3D decomp @ 002df264  name=FUN_002df264  size=176

void FUN_002df264(int *param_1)

{
  bool bVar1;
  int *piVar2;
  
LAB_002df27c:
  if (0 < *param_1) goto code_r0x002df288;
  ClearExclusiveLocal();
  bVar1 = false;
  goto LAB_002df29c;
code_r0x002df288:
  bVar1 = (bool)hasExclusiveAccess(param_1);
  if (bVar1) {
    *param_1 = *param_1 + -1;
    bVar1 = true;
LAB_002df29c:
    if (bVar1) {
      return;
    }
    piVar2 = param_1 + 1;
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *(short *)piVar2 = *(short *)piVar2 + 1;
    software_interrupt(0x22);
    piVar2 = param_1 + 1;
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *(short *)piVar2 = *(short *)piVar2 + -1;
  }
  goto LAB_002df27c;
}

