// OoT3D decomp @ 0046a160  name=FUN_0046a160  size=384

undefined4 FUN_0046a160(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_144 [280];

  FUN_003446dc();
  FUN_003445a8();
  uVar1 = DAT_0046a2e0;
  iVar5 = 0;
  do {
    pcVar4 = (char *)(param_2 + iVar5 * 0x28);
    if (*pcVar4 == '\0') {
      *(undefined4 *)(param_1 + iVar5 * 4 + 0x18) = 0;
    }
    else if (pcVar4[1] == -1) {
      iVar2 = *(int *)(param_1 + 0x14);
      if ((uint)(*(int *)(param_1 + 0x10) - iVar2) < 0x394) {
        iVar2 = 0;
      }
      else {
        *(int *)(param_1 + 0x14) = iVar2 + 0x394;
        iVar2 = iVar2 + *(int *)(param_1 + 0xc);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_002db010();
      }
      if (iVar2 == 0) {
        return 0;
      }
      uVar6 = VectorFloatToUnsigned(*(undefined4 *)(pcVar4 + 0x14),3);
      uVar7 = VectorFloatToUnsigned(*(undefined4 *)(pcVar4 + 0x18),3);
      *(char *)(*(int *)(param_1 + 0xd14) + 0xec) = (char)uVar7;
      iVar3 = FUN_003446e8(uVar1,param_1 + 0xc24,uVar6,(int)-*(float *)(pcVar4 + 4),
                           (int)-*(float *)(pcVar4 + 8),(int)*(float *)(pcVar4 + 0xc),
                           (int)*(float *)(pcVar4 + 0x10),auStack_144,
                           *(undefined1 *)(param_1 + 0xe3c));
      if ((iVar3 != 0) && (iVar3 = FUN_002ccf04(param_1 + 0xc24,param_1 + 0xde8,0), iVar3 != 0)) {
        FUN_002d2754(iVar2,param_1 + 0xde8,auStack_144,0);
        *(int *)(param_1 + iVar5 * 4 + 0x18) = iVar2;
      }
    }
    iVar5 = iVar5 + 1;
    if (0xff < iVar5) {
      return 1;
    }
  } while( true );
}
