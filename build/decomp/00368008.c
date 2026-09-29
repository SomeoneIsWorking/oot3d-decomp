// OoT3D decomp @ 00368008  name=FUN_00368008  size=580

void FUN_00368008(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  short sVar10;
  undefined4 uVar11;
  uint in_fpscr;
  float fVar12;
  undefined4 uVar13;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;

  uVar3 = DAT_0036825c;
  uVar2 = DAT_00368258;
  uVar1 = DAT_00368254;
  uVar11 = DAT_00368250;
  uVar9 = DAT_0036824c;
  sVar10 = 0;
  do {
    local_54 = FUN_003738a8(uVar9);
    local_50 = FUN_00371e50(uVar11);
    local_4c = FUN_003738a8(uVar9);
    local_5c = uVar1;
    local_60 = FUN_003738a8(uVar2);
    local_58 = FUN_003738a8(uVar2);
    local_48 = *(undefined4 *)(param_1 + 0x558);
    uStack_44 = *(undefined4 *)(param_1 + 0x55c);
    uStack_40 = *(undefined4 *)(param_1 + 0x560);
    fVar12 = (float)FUN_00371e50(uVar3);
    uVar13 = VectorSignedToFloat((short)(int)fVar12 + 8,(byte)(in_fpscr >> 0x15) & 3);
    FUN_0035ec30(uVar13,param_2,&local_48,&local_54,&local_60,param_3,0x4b);
    iVar5 = DAT_0036826c;
    uVar4 = DAT_00368268;
    uVar13 = DAT_00368264;
    iVar8 = DAT_00368260;
    sVar10 = sVar10 + 1;
  } while (sVar10 < 0xf);
  if (param_3 == 1) {
    *(undefined1 *)(DAT_0036826c + 3) = 1;
    iVar7 = FUN_0036aa20(*(undefined4 *)(param_1 + 0x558),*(undefined4 *)(param_1 + 0x55c),
                         *(undefined4 *)(param_1 + 0x560),param_2 + 0x208c,param_1,param_2,0xdc,0,0,
                         0,0x65);
    uVar9 = DAT_00368270;
    if (iVar7 == 0) {
      return;
    }
    if (*(int *)(*(int *)(iVar5 + 0x94) + 0x1a4) == iVar8) {
      *(undefined2 *)(iVar7 + 0x1d0) = 0x96;
    }
    else {
      *(undefined2 *)(iVar7 + 0x1d0) = 0x4b;
    }
    iVar8 = *(int *)(iVar5 + 0x90);
    *(undefined4 *)(iVar8 + 0x208) = uVar9;
    *(undefined4 *)(iVar8 + 0x204) = uVar9;
    *(undefined4 *)(iVar8 + 0x200) = uVar9;
    *(undefined4 *)(iVar8 + 0x20c) = uVar13;
    *(undefined4 *)(iVar8 + 0x210) = uVar4;
    uVar9 = *(undefined4 *)(iVar7 + 0x2c);
    uVar11 = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(iVar8 + 0x514) = *(undefined4 *)(iVar7 + 0x28);
    *(undefined4 *)(iVar8 + 0x518) = uVar9;
    *(undefined4 *)(iVar8 + 0x51c) = uVar11;
    uVar6 = 4;
  }
  else {
    *(undefined1 *)(DAT_0036826c + 3) = 2;
    iVar7 = FUN_0036aa20(*(undefined4 *)(param_1 + 0x558),*(undefined4 *)(param_1 + 0x55c),
                         *(undefined4 *)(param_1 + 0x560),param_2 + 0x208c,param_1,param_2,0xdc,0,0,
                         0,0x67);
    uVar11 = DAT_00368278;
    uVar9 = DAT_00368274;
    if (iVar7 == 0) {
      return;
    }
    if (*(int *)(*(int *)(iVar5 + 0x94) + 0x1a4) == iVar8) {
      *(undefined2 *)(iVar7 + 0x1d0) = 0x96;
    }
    else {
      *(undefined2 *)(iVar7 + 0x1d0) = 0x4b;
    }
    iVar8 = *(int *)(iVar5 + 0x8c);
    *(undefined4 *)(iVar8 + 0x208) = uVar9;
    *(undefined4 *)(iVar8 + 0x200) = uVar11;
    *(undefined4 *)(iVar8 + 0x20c) = uVar4;
    uVar9 = DAT_0036827c;
    *(undefined4 *)(iVar8 + 0x214) = uVar13;
    *(undefined4 *)(iVar8 + 0x21c) = uVar9;
    uVar9 = *(undefined4 *)(iVar7 + 0x2c);
    uVar11 = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(iVar8 + 0x514) = *(undefined4 *)(iVar7 + 0x28);
    *(undefined4 *)(iVar8 + 0x518) = uVar9;
    *(undefined4 *)(iVar8 + 0x51c) = uVar11;
    uVar6 = 3;
  }
  *(undefined1 *)(iVar5 + 2) = uVar6;
  return;
}
