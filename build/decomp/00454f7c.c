// OoT3D decomp @ 00454f7c  name=FUN_00454f7c  size=776

undefined4 FUN_00454f7c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_r1;
  int iVar7;
  bool bVar8;

  FUN_002e71b4();
  if (((*DAT_00455284 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_00455284), iVar1 != 0)) {
    FUN_0036788c(DAT_00455288);
  }
  iVar1 = 0;
  iVar7 = DAT_00455298 + *(int *)(DAT_00455294 + 0xf3c) * 0x800;
  uVar6 = DAT_00455298;
  do {
    if (8 < iVar1 - 1U) {
      iVar2 = param_1 + iVar1 * 0x10;
      bVar8 = *(int *)(iVar2 + 0x40c) != 0;
      if (bVar8) {
        uVar6 = (uint)*(byte *)(iVar2 + 0x414);
      }
      if (bVar8 && uVar6 != 0) {
        FUN_0034fc68();
      }
      *(undefined4 *)(iVar2 + 0x40c) = 0;
      *(undefined4 *)(iVar2 + 0x410) = 0;
      *(undefined1 *)(iVar2 + 0x414) = 0;
      iVar3 = FUN_00301300(iVar7 + iVar1 * 0x80,0,0);
      FUN_0031b9c0(iVar3,1);
      iVar4 = *(int *)(iVar3 + 4);
      *(int *)(iVar2 + 0x410) = iVar4;
      if (iVar4 == 0) {
LAB_0045507c:
        FUN_00301260(iVar3);
        FUN_0031b99c(iVar3);
        FUN_002e71b4(param_1);
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined1 *)(param_1 + 8) = 0;
        *(undefined1 *)(param_1 + 0xb) = 0;
        *(undefined1 *)(param_1 + 0xc) = 0;
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 10) = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined1 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x18b0) = 0;
        *(undefined4 *)(param_1 + 0x3f0) = 0;
        *(undefined4 *)(param_1 + 0x18a8) = 0;
        *(undefined4 *)(param_1 + 0x18ac) = 0;
        *(undefined1 *)(param_1 + 0x19) = 0;
        FUN_00343280(param_1 + 0x1c,0x48);
        FUN_00343280(param_1 + 100,0x300);
        FUN_00343280(param_1 + 0x364,0x80);
        FUN_00343280(param_1 + 0x18b4,0x80);
        *(undefined1 *)(param_1 + 9) = 0;
        return 0;
      }
      iVar4 = thunk_FUN_0035010c(*(undefined4 *)(iVar2 + 0x410),0x9c00000);
      *(int *)(iVar2 + 0x40c) = iVar4;
      if (iVar4 == 0) goto LAB_0045507c;
      uVar5 = FUN_00303ea8(iVar3);
      FUN_0034338c(*(undefined4 *)(iVar2 + 0x40c),uVar5,*(undefined4 *)(iVar2 + 0x410));
      FUN_00301260(iVar3);
      FUN_0031b99c(iVar3);
      *(undefined1 *)(iVar2 + 0x414) = 1;
      uVar6 = extraout_r1;
    }
    iVar1 = iVar1 + 1;
    if (0xe < iVar1) {
      FUN_002ff8e0(param_1 + 0x4f8,*(undefined4 *)(param_1 + 0x40c),0);
      *(int *)(param_1 + 0x8e8) = param_1 + 0x4f8;
      iVar7 = 1;
      *(undefined4 *)(param_1 + 0x8ec) = 0;
      iVar1 = 1;
      *(undefined4 *)(param_1 + 0x8f0) = 0;
      do {
        iVar2 = iVar7 + 1;
        *(undefined4 *)(param_1 + iVar7 * 4 + 0x8f0) = 0;
        iVar1 = iVar1 + 2;
        iVar7 = iVar7 + 2;
        *(undefined4 *)(param_1 + iVar2 * 4 + 0x8f0) = 0;
      } while (iVar1 < 9);
      *(undefined4 *)(param_1 + 0x914) = 0;
      FUN_002db998(param_1 + 0x918,param_1 + 0x8e8,0xc,*(undefined4 *)(param_1 + 0x4ac),
                   *(undefined4 *)(param_1 + 0x4b0),*(undefined4 *)(param_1 + 0x4bc),
                   *(undefined4 *)(param_1 + 0x4c0),*(undefined4 *)(param_1 + 0x4cc),
                   *(undefined4 *)(param_1 + 0x4d0),*(undefined4 *)(param_1 + 0x4dc),
                   *(undefined4 *)(param_1 + 0x4e0),0,0,0);
      uVar6 = DAT_0045529c;
      *(undefined4 *)(param_1 + 0x18a8) = *(undefined4 *)(param_1 + 0x4ec);
      *(uint *)(param_1 + 0x18ac) =
           (uint)((ulonglong)*(uint *)(param_1 + 0x4f0) * (ulonglong)uVar6 >> 0x27);
      iVar1 = 0;
      do {
        iVar2 = param_1 + 0x918 + iVar1 * 4;
        iVar1 = iVar1 + 1;
        iVar7 = *(int *)(iVar2 + 0x418);
        if (iVar7 != 0) {
          *(undefined1 *)(iVar7 + 0x6c) = 0;
        }
        iVar7 = *(int *)(iVar2 + 0x818);
        if (iVar7 != 0) {
          *(undefined1 *)(iVar7 + 0x6c) = 0;
        }
      } while (iVar1 < 0x100);
      *(undefined1 *)(param_1 + 8) = 0;
      *(undefined1 *)(param_1 + 0xc) = 0;
      *(undefined1 *)(param_1 + 10) = 1;
      *(undefined4 *)(param_1 + 0x3e4) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x19) = 0;
      return 1;
    }
  } while( true );
}
