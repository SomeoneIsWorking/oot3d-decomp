// OoT3D decomp @ 00358458  name=FUN_00358458  size=272

void FUN_00358458(undefined4 param_1,undefined4 param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  fVar3 = DAT_00358680;
  uVar2 = DAT_0035867c;
  uVar1 = DAT_00358678;
  if (*(char *)(DAT_00358674 + 9) < '\x14') {
    iVar6 = 2;
  }
  else {
    iVar6 = 1;
  }
  do {
    fVar7 = (float)FUN_003738a8(uVar1);
    fVar10 = *param_3;
    fVar8 = (float)FUN_003738a8(uVar1);
    fVar11 = param_3[1];
    fVar9 = (float)FUN_003738a8(uVar1);
    pfVar5 = DAT_00358694;
    fVar12 = param_3[2];
    FUN_003738a8(uVar2);
    iVar4 = 0;
    do {
      if (*(char *)(pfVar5 + 9) == '\0') {
        *(undefined1 *)(pfVar5 + 9) = 8;
        *pfVar5 = fVar7 + fVar10;
        pfVar5[1] = fVar8 + fVar11;
        pfVar5[2] = fVar9 + fVar12;
        pfVar5[0x11] = fVar3;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 0x17;
    } while (iVar4 < 200);
    iVar6 = iVar6 + -1;
  } while (0 < iVar6);
  return;
}
