// OoT3D decomp @ 00239770  name=FUN_00239770  size=316

void FUN_00239770(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;

  sVar5 = 0;
  FUN_003731e0(param_1 + 0x1a4);
  if (*(char *)(param_1 + 0x588) != '\0') {
    *(undefined1 *)(param_2 + 0x5c74) = 0xfe;
  }
  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar2 != *(short *)(param_1 + 0x57e)) {
    return;
  }
  iVar2 = FUN_00346964(param_2);
  if (iVar2 == 0) {
    return;
  }
  if (*(short *)(param_1 + 0x57c) != 0) {
    FUN_003725e0(param_2);
    goto LAB_0023987c;
  }
  iVar3 = FUN_00369f3c();
  iVar2 = DAT_002398ac;
  iVar6 = DAT_002398ac + 8;
  if (iVar3 == 0) {
    if (*(short *)(DAT_002398b0 + 0x48) < 0x14) {
      sVar5 = 2;
      *(undefined2 *)(param_1 + 0x57c) = 2;
    }
    else {
      FUN_00376a60(0xffffffec);
      sVar5 = 1;
      *(undefined2 *)(param_1 + 0x57c) = 1;
    }
    *(undefined2 *)(param_1 + 0x116) = *(undefined2 *)(iVar2 + *(short *)(param_1 + 0x57c) * 2);
    uVar1 = *(undefined2 *)(iVar6 + *(short *)(param_1 + 0x57c) * 2);
LAB_00239858:
    *(undefined2 *)(param_1 + 0x57e) = uVar1;
  }
  else if (iVar3 == 1) {
    sVar5 = 2;
    *(undefined2 *)(param_1 + 0x116) = *(undefined2 *)(DAT_002398ac + 6);
    uVar1 = *(undefined2 *)(iVar2 + 0xe);
    goto LAB_00239858;
  }
  FUN_0036be34(param_2,*(undefined2 *)(param_1 + 0x116));
LAB_0023987c:
  uVar4 = DAT_002398b4;
  if ((sVar5 != 0) && (uVar4 = DAT_002398bc, sVar5 != 1)) {
    if (sVar5 == 2) {
      *(undefined4 *)(param_1 + 0x568) = DAT_002398b8;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x568) = uVar4;
  return;
}
