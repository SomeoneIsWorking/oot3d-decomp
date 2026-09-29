// OoT3D decomp @ 00482368  name=FUN_00482368  size=324

void FUN_00482368(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;

  puVar3 = DAT_004824b4;
  piVar2 = DAT_004824ac;
  if (*DAT_004824ac != 0) {
    iVar5 = 0;
    iVar6 = *DAT_004824b0;
    do {
      iVar4 = *(int *)(*piVar2 + iVar5 * 4);
joined_r0x00482398:
      iVar1 = iVar4;
      if (iVar1 != 0) {
        iVar4 = *(int *)(iVar1 + 0xc);
        if (*(int *)(iVar1 + 4) == 0) {
          if (*(int *)(iVar1 + 8) != 0) goto code_r0x00482474;
          goto LAB_0048249c;
        }
        if (*(int *)(iVar1 + 4) == 1) {
          if (*(int *)(iVar1 + 8) != 0) {
            if ((code *)*puVar3 == (code *)0x0) goto joined_r0x00482398;
            (*(code *)*puVar3)(0x10000,0x100,0);
          }
          pcVar7 = (code *)*puVar3;
          goto joined_r0x004824a4;
        }
        goto joined_r0x00482398;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x200);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(0x10000,0x100,0,*(undefined4 *)(*piVar2 + 0x800));
    }
    *(undefined4 *)(iVar6 + 0x50c) = 0;
    *(undefined4 *)(iVar6 + 0x508) = 0;
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(0x10000,0x100,0,*piVar2);
    }
    *piVar2 = 0;
  }
  return;
code_r0x00482474:
  FUN_002cce18(iVar1);
  if ((code *)*puVar3 != (code *)0x0) {
    (*(code *)*puVar3)(0x10000,0x100,0,*(undefined4 *)(iVar1 + 8));
LAB_0048249c:
    pcVar7 = (code *)*puVar3;
joined_r0x004824a4:
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(0x10000,0x100,0,iVar1);
    }
  }
  goto joined_r0x00482398;
}
