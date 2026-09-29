// OoT3D decomp @ 00423bbc  name=FUN_00423bbc  size=520

void FUN_00423bbc(undefined4 *param_1,int param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;

  puVar1 = DAT_00423dc4;
  if (DAT_00423dc4[1] == '\0') {
    DAT_00423dc4[1] = 1;
    iVar3 = param_2;
    if (((*DAT_00423dc8 & 1) == 0) &&
       (uVar10 = FUN_003679b4(DAT_00423dc8), iVar3 = (int)((ulonglong)uVar10 >> 0x20),
       (int)uVar10 != 0)) {
      FUN_0030c5b8(DAT_00423dcc);
      iVar3 = DAT_00423dd4;
    }
    FUN_00438410(DAT_00423dcc,iVar3);
    iVar3 = param_1[3];
    iVar6 = param_1[6] + iVar3 + param_2;
    uVar4 = FUN_0030c550();
    FUN_002ea14c(uVar4,param_2,param_1[3]);
    uVar4 = FUN_0030c4f4();
    FUN_002ea14c(uVar4,iVar3 + param_2,param_1[6]);
    iVar3 = iVar6;
    iVar8 = 0;
    iVar9 = 0;
    if (*(char *)(param_1 + 7) != '\0') {
      iVar7 = iVar6 + param_1[2];
      iVar3 = iVar7;
      iVar8 = iVar6;
      if (param_1[1] == 1) {
        iVar3 = iVar7 + param_1[2];
        iVar9 = iVar7;
      }
    }
    FUN_0030c7cc();
    FUN_004381f4();
    iVar6 = param_1[5];
    FUN_0030c8bc();
    FUN_0044d968();
    piVar2 = DAT_00423dd8;
    iVar7 = param_1[5];
    *DAT_00423dd8 = iVar3;
    piVar2[1] = iVar7;
    uVar4 = FUN_0030c6e0();
    iVar7 = FUN_002f9e84(uVar4,*(undefined4 *)(puVar1 + 4));
    uVar4 = FUN_0030c6e0();
    uVar4 = FUN_002f9e84(uVar4,*(undefined4 *)(puVar1 + 4));
    uVar5 = FUN_0030c6e0();
    FUN_0043835c(uVar5,iVar6 + iVar3,uVar4);
    uVar4 = FUN_0030c758();
    FUN_002f9e74(uVar4,*(undefined4 *)(puVar1 + 4));
    uVar4 = FUN_0030c758();
    uVar4 = FUN_002f9e74(uVar4,*(undefined4 *)(puVar1 + 4));
    uVar5 = FUN_0030c758();
    FUN_004383c8(uVar5,iVar7 + iVar6 + iVar3,uVar4);
    FUN_00438500();
    FUN_004380f8(DAT_00423ddc,param_1[4],DAT_00423dd8);
    if (*(char *)(param_1 + 7) != '\0') {
      uVar4 = FUN_0030c7cc();
      FUN_00438220(uVar4,iVar8,param_1[2],*param_1,iVar9,param_1[2],*param_1,param_1[1],
                   (int)*(char *)((int)param_1 + 0x1d));
    }
    *puVar1 = *(undefined1 *)(param_1 + 7);
  }
  return;
}
