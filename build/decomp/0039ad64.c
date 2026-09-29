// OoT3D decomp @ 0039ad64  name=FUN_0039ad64  size=244

void FUN_0039ad64(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;

  FUN_0031a3dc();
  uVar3 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_0039ae58;
  FUN_00376340(DAT_0039ae64,DAT_0039ae60,DAT_0039ae5c,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar3;
  FUN_0031a014(param_1,param_2);
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  FUN_003264c8(param_1);
  iVar1 = FUN_00319f20(param_1,param_2);
  if (iVar1 != 0) {
    fVar2 = *(float *)(param_1 + 0xbfc) + DAT_0039ae68;
    *(float *)(param_1 + 0xbfc) = fVar2;
    if ((int)fVar2 < DAT_0039ae6c) {
      uVar3 = VectorFloatToUnsigned((DAT_0039ae70 - fVar2) * DAT_0039ae74 * DAT_0039ae78,3);
      *(undefined4 *)(param_1 + 0xc00) = uVar3;
      *(char *)(param_1 + 0xd0) = (char)uVar3;
    }
    else {
      *(undefined4 *)(param_1 + 0xbbc) = 0x2e;
      *(undefined2 *)(param_1 + 0xbb0) = 0x1ae;
      *(undefined2 *)(param_1 + 0xbb2) = 0x3c;
    }
  }
  FUN_00319f20(param_1,param_2);
  return;
}
