// OoT3D decomp @ 004487f0  name=FUN_004487f0  size=484

undefined4 FUN_004487f0(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  
  if (((*puRam004489d4 & 1) == 0) && (iVar3 = FUN_003679b4(puRam004489d4), iVar3 != 0)) {
    FUN_0036788c(uRam004489d8);
  }
  func_0x00455d84(uRam004489e4,(int)*(short *)(param_1 + 0x104));
  iVar3 = iRam004489ec;
  uVar2 = uRam004489e8;
  uVar4 = (uint)*(ushort *)(param_1 + 0x104);
  bVar9 = uVar4 == 0x5a;
  if (bVar9) {
    uVar4 = *(uint *)(iRam004489ec + 8);
  }
  bVar10 = uVar4 == uRam004489e8;
  if (bVar9 && bVar10) {
    uVar5 = FUN_00307650();
    func_0x002e56ec(uVar5,1);
    iVar6 = FUN_00307650();
    *(undefined1 *)(iVar6 + 0xd) = 1;
    *(undefined2 *)(iVar6 + 0xe) = 0;
  }
  func_0x00450b00(param_1,bVar9 && bVar10);
  iVar6 = param_1 + 0x601c;
  if (iVar6 != 0) {
    func_0x004554c4();
  }
  bVar9 = false;
  if (*(short *)(param_1 + 0x104) == 0x47) {
    bVar9 = *(int *)(iVar3 + 8) == 0xfff9;
  }
  if (bVar9) {
    FUN_004552a0(iVar6);
    FUN_002e56dc(param_1,param_1 + 0x6020);
    FUN_00455460(iVar6);
  }
  *(undefined1 *)(param_1 + 0x107) = 0;
  iVar6 = iRam004489f0;
  sVar1 = *(short *)(param_1 + 0x104);
  if (sVar1 == 0x51) {
    iVar7 = *(int *)(iVar3 + 8);
joined_r0x0044891c:
    if (iVar7 != iRam004489f0) {
      return 3;
    }
  }
  else {
    if (sVar1 == 0x6b) {
      iVar7 = *(int *)(iVar3 + 8);
      goto joined_r0x0044891c;
    }
    if (sVar1 == 0x17) {
      if (*(uint *)(iVar3 + 8) != uVar2) {
        return 3;
      }
    }
    else if (sVar1 == 0x61) {
      if (*(int *)(iVar3 + 8) != 0xfff1) {
        return 3;
      }
    }
    else {
      bVar9 = false;
      if (sVar1 == 0x47) {
        bVar9 = *(int *)(iVar3 + 8) == 0xfff6;
      }
      if (!bVar9) {
        return 3;
      }
    }
  }
  FUN_003016e0(1);
  func_0x00454f4c();
  iVar7 = (int)*(short *)(param_1 + 0x104);
  if (iVar7 == 0x51) {
    if (*(int *)(iVar3 + 8) != iVar6) {
LAB_004489bc:
      uVar5 = *puRam004489f4;
      uVar8 = 2;
      goto LAB_004489c4;
    }
  }
  else {
    bVar9 = iVar7 == 0x6b;
    if (bVar9) {
      iVar7 = *(int *)(iVar3 + 8);
    }
    if (!bVar9 || iVar7 != iVar6) goto LAB_004489bc;
  }
  uVar5 = *puRam004489f4;
  uVar8 = 0;
LAB_004489c4:
  FUN_003480a8(uVar5,uVar8);
  *(undefined1 *)(param_1 + 0x107) = 1;
  return 3;
}

