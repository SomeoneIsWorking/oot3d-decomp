// OoT3D decomp @ 002ea87c  name=FUN_002ea87c  size=344

void FUN_002ea87c(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  code *extraout_r12;
  code *pcVar7;
  code *extraout_r12_00;

  iVar2 = DAT_002ea9d4;
  if (*(char *)(DAT_002ea9d4 + 0x10) != '\0') {
    FUN_004824b8();
    FUN_00482008();
    FUN_00481c2c();
    FUN_00482368();
    FUN_00481ac4();
    FUN_00481fc0();
    *(undefined1 *)(iVar2 + 0x10) = 0;
    FUN_00485ab8();
    puVar4 = DAT_002ea9dc;
    uVar3 = DAT_002ea9d8;
    iVar6 = 0;
    pcVar7 = extraout_r12;
    do {
      puVar5 = *(undefined4 **)(iVar2 + iVar6 * 4 + 0x1c);
joined_r0x002ea8cc:
      puVar1 = puVar5;
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)puVar1[0xe];
        if (puVar1[1] != 0) {
          pcVar7 = (code *)puVar4[1];
        }
        if (puVar1[1] != 0 && pcVar7 != (code *)0x0) {
          (*pcVar7)(0x10000,uVar3,*puVar1);
        }
        if (puVar1[6] != 0) goto code_r0x002ea904;
        goto LAB_002ea920;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x20);
    iVar6 = 0;
    do {
      puVar5 = *(undefined4 **)(iVar2 + iVar6 * 4 + 0xa4);
joined_r0x002ea964:
      puVar1 = puVar5;
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)puVar1[6];
        if (puVar1[1] != 0) goto code_r0x002ea978;
        goto LAB_002ea994;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x20);
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  return;
code_r0x002ea904:
  pcVar7 = (code *)0x0;
  if ((code *)puVar4[1] != (code *)0x0) {
    (*(code *)puVar4[1])(0x10000,0x100,0);
LAB_002ea920:
    pcVar7 = (code *)0x0;
    if ((code *)puVar4[1] != (code *)0x0) {
      (*(code *)puVar4[1])(0x10000,0x100,0,puVar1);
      pcVar7 = extraout_r12_00;
    }
  }
  goto joined_r0x002ea8cc;
code_r0x002ea978:
  if ((code *)puVar4[1] != (code *)0x0) {
    (*(code *)puVar4[1])(puVar1[5],0x104,*puVar1);
LAB_002ea994:
    if ((code *)puVar4[1] != (code *)0x0) {
      (*(code *)puVar4[1])(0x10000,0x100,0,puVar1);
    }
  }
  goto joined_r0x002ea964;
}
