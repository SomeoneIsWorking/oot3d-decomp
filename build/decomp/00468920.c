// OoT3D decomp @ 00468920  name=COmoteUraSelector_00468920  size=708

void COmoteUraSelector_00468920(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r1;
  bool bVar6;
  undefined8 uVar7;
  undefined4 auStack_44 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;

  uVar3 = DAT_00468be4;
  if ((undefined4 *)(param_1 + 0x474) != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x474) = DAT_00468be4;
    *(undefined4 *)(param_1 + 0x478) = 0;
    *(undefined4 *)(param_1 + 0x47c) = 0;
    *(undefined1 *)(param_1 + 0x480) = 0;
  }
  if ((undefined4 *)(param_1 + 0x484) != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x484) = uVar3;
    *(undefined4 *)(param_1 + 0x488) = 0;
    *(undefined4 *)(param_1 + 0x48c) = 0;
    *(undefined1 *)(param_1 + 0x490) = 0;
  }
  puVar1 = DAT_00468bec;
  iVar2 = (**(code **)(*(int *)*DAT_00468bec + 0xc))
                    ((int *)*DAT_00468bec,0x54,DAT_00468be8,DAT_00468bf0);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_002ffa20();
  }
  *(undefined4 *)(param_1 + 0x494) = uVar3;
  iVar2 = (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,0x54,DAT_00468be8,0x198);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_002ffa20();
  }
  *(undefined4 *)(param_1 + 0x498) = uVar3;
  auStack_44[0] = *DAT_00468bf4;
  auStack_44[1] = DAT_00468bf4[1];
  auStack_44[2] = DAT_00468bf4[2];
  auStack_44[3] = DAT_00468bf4[3];
  uStack_34 = DAT_00468bf4[4];
  uStack_30 = DAT_00468bf4[5];
  uStack_2c = DAT_00468bf4[6];
  uStack_28 = DAT_00468bf4[7];
  uStack_24 = DAT_00468bf4[8];
  uStack_20 = DAT_00468bf4[9];
  uVar5 = DAT_00468bf4[6];
  if (((*DAT_00468bf8 & 1) == 0) &&
     (uVar7 = FUN_003679b4(DAT_00468bf8), uVar5 = (uint)((ulonglong)uVar7 >> 0x20), (int)uVar7 != 0)
     ) {
    FUN_0036788c(DAT_00468bfc);
    uVar5 = DAT_00468c04;
  }
  uVar3 = auStack_44[*(int *)(DAT_00468c08 + 0xf3c)];
  bVar6 = *(int *)(param_1 + 0x478) != 0;
  if (bVar6) {
    uVar5 = (uint)*(byte *)(param_1 + 0x480);
  }
  if (bVar6 && uVar5 != 0) {
    FUN_0034fc68();
  }
  *(undefined4 *)(param_1 + 0x478) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined1 *)(param_1 + 0x480) = 0;
  iVar2 = FUN_00301300(uVar3,0,0);
  FUN_0031b9c0(iVar2,1);
  iVar4 = *(int *)(iVar2 + 4);
  *(int *)(param_1 + 0x47c) = iVar4;
  if (iVar4 != 0) {
    iVar4 = thunk_FUN_0035010c(*(undefined4 *)(param_1 + 0x47c),0x9c00000);
    *(int *)(param_1 + 0x478) = iVar4;
    if (iVar4 != 0) {
      uVar3 = FUN_00303ea8(iVar2);
      FUN_0034338c(*(undefined4 *)(param_1 + 0x478),uVar3,*(undefined4 *)(param_1 + 0x47c));
      FUN_00301260(iVar2);
      FUN_0031b99c(iVar2);
      *(undefined1 *)(param_1 + 0x480) = 1;
      bVar6 = *(int *)(param_1 + 0x488) != 0;
      uVar5 = extraout_r1;
      if (bVar6) {
        uVar5 = (uint)*(byte *)(param_1 + 0x490);
      }
      if (bVar6 && uVar5 != 0) {
        FUN_0034fc68();
      }
      *(undefined4 *)(param_1 + 0x488) = 0;
      *(undefined4 *)(param_1 + 0x48c) = 0;
      *(undefined1 *)(param_1 + 0x490) = 0;
      iVar2 = FUN_00301300(u_rom__misc_common_bg01_ctxb_00468c0c,0,0);
      FUN_0031b9c0(iVar2,1);
      iVar4 = *(int *)(iVar2 + 4);
      *(int *)(param_1 + 0x48c) = iVar4;
      if (iVar4 != 0) {
        iVar4 = thunk_FUN_0035010c(*(undefined4 *)(param_1 + 0x48c),0x9c00000);
        *(int *)(param_1 + 0x488) = iVar4;
        if (iVar4 != 0) {
          uVar3 = FUN_00303ea8(iVar2);
          FUN_0034338c(*(undefined4 *)(param_1 + 0x488),uVar3,*(undefined4 *)(param_1 + 0x48c));
          FUN_00301260(iVar2);
          FUN_0031b99c(iVar2);
          *(undefined1 *)(param_1 + 0x490) = 1;
          FUN_002ff8e0(*(undefined4 *)(param_1 + 0x494),*(undefined4 *)(param_1 + 0x478),0);
          FUN_002ff8e0(*(undefined4 *)(param_1 + 0x498),*(undefined4 *)(param_1 + 0x488),0);
          return;
        }
      }
      FUN_00301260(iVar2);
      FUN_0031b99c(iVar2);
      return;
    }
  }
  FUN_00301260(iVar2);
  FUN_0031b99c(iVar2);
  return;
}
