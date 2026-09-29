// OoT3D decomp @ 00366d18  name=FUN_00366d18  size=424

void FUN_00366d18(float param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar7;

  fVar2 = DAT_00366f2c;
  pfVar1 = DAT_00366f28;
  if (((*(uint *)(DAT_00366f24 + 4) & 1) == 0) &&
     (iVar7 = FUN_003679b4(DAT_00366f30), fVar3 = DAT_00366f38, iVar7 != 0)) {
    *pfVar1 = DAT_00366f34;
    pfVar1[1] = fVar2;
    pfVar1[2] = fVar3;
  }
  pfVar1[2] = pfVar1[2] + param_1;
  FUN_003731e0(param_3 + 0x1a4);
  FUN_00373500(param_2,DAT_00366f40,DAT_00366f3c,param_3 + 0x6c);
  if (param_5 != 0) {
    sVar6 = FUN_003758b0(pfVar1[2] - *(float *)(param_3 + 0x30),*pfVar1 - *(float *)(param_3 + 0x28)
                        );
    FUN_00370084(param_3 + 0x36,(int)(short)(sVar6 + -0x8000),3,1000);
  }
  uVar4 = DAT_00366f44;
  iVar7 = FUN_003736fc(DAT_00366f48,DAT_00366f44,param_3 + 0x1a4);
  if (iVar7 == 0) {
    iVar7 = FUN_003736fc(uVar4,uVar4,param_3 + 0x1a4);
    if (iVar7 == 0) {
      return;
    }
    param_3 = param_3 + 800;
  }
  else {
    param_3 = param_3 + 0x314;
  }
  uVar5 = DAT_00366f54;
  uVar4 = DAT_00366f50;
  if (param_3 == 0) {
    return;
  }
  FUN_003738a8(DAT_00366f50);
  FUN_00371e50(uVar5);
  FUN_003738a8(uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
