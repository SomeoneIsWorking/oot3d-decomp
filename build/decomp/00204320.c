// OoT3D decomp @ 00204320  name=FUN_00204320  size=784

void FUN_00204320(int param_1,int param_2)

{
  short sVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;

  iVar9 = DAT_00204698;
  sVar1 = *(short *)(param_1 + 0x234) + -1;
  *(short *)(param_1 + 0x234) = sVar1;
  fVar6 = DAT_002046b0;
  uVar5 = DAT_002046ac;
  if (*(char *)(param_1 + 0x232) == '\0') {
    if (sVar1 < -0xff) {
      FUN_003400ac(param_1,param_2);
      FUN_00338654(param_2,0,(int)*(short *)(iVar9 + 4));
      piVar3 = DAT_0020469c;
      bVar10 = (char)DAT_0020469c[2] != '\0';
      iVar8 = 0;
      if (bVar10) {
        iVar8 = *DAT_0020469c;
      }
      if (bVar10 && iVar8 != 0) {
        iVar8 = FUN_0036c5bc(iVar8,0xffffffff);
        FUN_00367c48();
        *(undefined4 *)(iVar8 + 0x144) = DAT_002046a0;
        *(undefined1 *)(piVar3 + 2) = 0;
      }
      FUN_00320d7c(param_2,(int)*(short *)(iVar9 + 4),1);
      FUN_00320d7c(param_2,0,7);
      FUN_0036963c(param_2,(int)*(short *)(iVar9 + 4));
      FUN_0036e980(param_2,*(undefined4 *)(param_2 + 0x20ac),7);
      FUN_00367374(param_2,param_2 + 0x2298);
      FUN_00374428(param_1);
      puVar4 = DAT_002046a4;
      FUN_00374428(*DAT_002046a4);
      FUN_00374428(puVar4[1]);
      FUN_0036ec14(param_2,(int)*(char *)(DAT_002046a8 + param_2));
    }
  }
  else if (*(char *)(param_1 + 0x12f8) == '\0') {
    z_actor_003738d0(DAT_002046b0,DAT_002046ac,DAT_002046ac,param_2 + 0x208c,param_2,0x5d,0,0,0,
                     0xffffffff,1);
    iVar9 = FUN_0035b164();
    fVar7 = DAT_002046b4;
    if (iVar9 == 1) {
      iVar9 = FUN_0035b0a0();
      if (iVar9 != 0) {
        fVar11 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
        fVar12 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
        fVar13 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
        fVar13 = fVar13 * DAT_002046b8;
        fVar14 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
        FUN_0035af20(fVar6 - fVar14 * fVar7,uVar5,fVar13,fVar6 + fVar12 * fVar7,uVar5,fVar11 * fVar7
                     ,param_2,6,*(short *)(param_1 + 0xbe) + -0x8000);
      }
    }
    else {
      fVar11 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      fVar12 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      z_actor_003738d0(fVar6 + fVar12 * fVar7,uVar5,fVar11 * fVar7,param_2 + 0x208c,param_2,0x5f,0,0
                       ,0,0,1);
    }
    FUN_0035af04(*(undefined4 *)(param_2 + 0x20ac),0);
    FUN_00340218(DAT_002046bc,7);
    *(undefined1 *)(param_1 + 0x232) = 0;
  }
  else if (sVar1 == 0) {
    *(undefined2 *)(param_1 + 0x12f6) = 0;
    *(undefined2 *)(param_1 + 0x1322) = 0xffff;
    *(undefined2 *)(param_1 + 0x134e) = 0xffff;
  }
  else if (0 < sVar1) {
    *(short *)(param_1 + 0x12f6) = *(short *)(param_1 + 0x12f6) + 5;
    FUN_003400ac(param_1,param_2);
  }
  uVar5 = DAT_002046c4;
  iVar9 = DAT_002046c0;
  uVar2 = *(undefined1 *)(param_1 + 0x12f8);
  *(undefined1 *)(DAT_002046c0 + 3) = uVar2;
  *(undefined1 *)(iVar9 + 7) = uVar2;
  FUN_003738a8(uVar5);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
