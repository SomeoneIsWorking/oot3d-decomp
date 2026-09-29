// OoT3D decomp @ 00295138  name=FUN_00295138  size=324

void FUN_00295138(int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;

  fVar2 = DAT_00295284;
  iVar4 = *(int *)(DAT_0029527c + param_2);
  uVar5 = *(undefined4 *)(iVar4 + 0x2c);
  uVar6 = *(undefined4 *)(iVar4 + 0x30);
  *(undefined4 *)(param_1 + 0xcfc) = *(undefined4 *)(iVar4 + 0x28);
  *(undefined4 *)(param_1 + 0xd00) = uVar5;
  *(undefined4 *)(param_1 + 0xd04) = uVar6;
  iVar4 = *DAT_00295280;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x1474),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0xcf8) = fVar7 - fVar2;
  FUN_0034c664(param_1,param_1 + 0xce4,(int)(short)(*(short *)(iVar4 + 0x1476) + 0xc),2);
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  FUN_003264c8(param_1);
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xc0c);
  uVar5 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_00295288;
  FUN_00376340(DAT_00295294,DAT_00295290,DAT_0029528c,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar5;
  iVar4 = FUN_0036bc98(param_1,param_2);
  if (iVar4 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 9;
    sVar3 = FUN_0036bba8(param_2,0x1f);
    *(short *)(param_1 + 0x116) = sVar3;
    if (sVar3 == 0) {
      *(short *)(param_1 + 0x116) = (short)DAT_00295298;
    }
    FUN_00363cb8(param_1,param_2);
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    *(undefined4 *)(param_1 + 0xbbc) = 0x2d;
  }
  return;
}
