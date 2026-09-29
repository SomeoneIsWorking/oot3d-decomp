// OoT3D decomp @ 003053fc  name=FUN_003053fc  size=696

void FUN_003053fc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;

  uVar2 = DAT_00305690;
  uVar1 = DAT_0030568c;
  uVar5 = DAT_00305688;
  iVar8 = *(int *)(param_1 + 0xbd8);
  uVar6 = *(uint *)(*(int *)(param_1 + 8) + 0x18);
  if ((((~uVar6 & 0x40000000) == 0) || ((~uVar6 & 0x40) == 0)) && (0 < *(int *)(param_1 + 0xfc4))) {
    *(int *)(param_1 + 0xfc4) = *(int *)(param_1 + 0xfc4) + -1;
    FUN_0037547c(uVar5,0,4,uVar2,uVar2,uVar1);
  }
  uVar2 = DAT_00305690;
  uVar1 = DAT_0030568c;
  uVar6 = *(uint *)(*(int *)(param_1 + 8) + 0x18);
  if ((((~uVar6 & 0x80000000) == 0) || ((~uVar6 & 0x80) == 0)) &&
     (*(int *)(param_1 + 0xfc4) < *(int *)(param_1 + 0xfb0) + -1)) {
    *(int *)(param_1 + 0xfc4) = *(int *)(param_1 + 0xfc4) + 1;
    FUN_0037547c(uVar5,0,4,uVar2,uVar2,uVar1);
  }
  if (*(short *)(*DAT_00305694 + 0x4d2) != 0) goto LAB_0030564c;
  iVar3 = *(int *)(param_1 + 8);
  if ((~*(uint *)(iVar3 + 0x18) & 1) == 0) {
    if (*(int *)(param_1 + 0xfa4) < 1) {
      uVar6 = *(uint *)(param_1 + 0xfb0);
      bVar9 = uVar6 == 2;
      iVar4 = iVar3;
      if (bVar9) {
        iVar4 = iVar3 + 0x2b00;
        uVar6 = (uint)*(ushort *)(iVar3 + 0x2b7e);
      }
      if (bVar9 && uVar6 == 1) {
        if (*(int *)(param_1 + 0xfc4) == 0) {
          *(undefined2 *)(iVar4 + 0x7e) = 2;
        }
        else {
          *(undefined2 *)(iVar4 + 0x7e) = 4;
          if (*(short *)(DAT_00305698 + 0x52) != 0) {
            iVar3 = *(int *)(DAT_0030569c + *(int *)(param_1 + 8));
            FUN_0034708c();
            *(byte *)(iVar3 + 0x172a) = *(byte *)(iVar3 + 0x172a) | 0x40;
          }
        }
      }
      FUN_00305754(param_1 + 0x44);
      FUN_002c453c(param_1 + 0x44);
      iVar3 = param_1 + *(int *)(param_1 + 0xfc4) * 4;
      iVar4 = *(int *)(iVar3 + 0xfb4);
      *(undefined4 *)(param_1 + 0xfa4) = 0;
      if (iVar4 == -1) {
        if (*(char *)(param_1 + 0xf38) != '\0') {
          *(undefined4 *)(param_1 + 0xfa4) = 3;
          *(undefined1 *)(param_1 + 0xf38) = 0xe;
        }
      }
      else {
        iVar3 = FUN_002cd2b4(param_1,*(undefined4 *)(iVar3 + 0xfb4));
        if (iVar3 != 0) {
          *(undefined1 *)(param_1 + 0xf38) = 0xd;
          *(undefined4 *)(param_1 + 0xfa4) = 3;
        }
      }
      FUN_0037547c(DAT_003056a0,0,4,DAT_00305690,DAT_00305690,DAT_0030568c);
      goto LAB_00305634;
    }
  }
  else {
LAB_00305634:
    if (*(int *)(param_1 + 0xfa4) < 1) goto LAB_0030564c;
  }
  *(int *)(param_1 + 0xfa4) = *(int *)(param_1 + 0xfa4) + -1;
LAB_0030564c:
  uVar5 = FUN_0048c368(param_1 + 0xac4,
                       *(int *)(param_1 + 0xfc4) + (iVar8 - *(int *)(param_1 + 0xfb0)));
  fVar10 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = fVar10 + DAT_003056a4;
  iVar8 = *(int *)(param_1 + 0x574);
  pfVar7 = (float *)(DAT_0048b8d4 + *(int *)(param_1 + 0x164) * 8);
  fVar11 = pfVar7[1];
  *(float *)(iVar8 + 0x80) = *pfVar7 + DAT_003056a4;
  *(float *)(iVar8 + 0x84) = fVar11 + fVar10;
  return;
}
