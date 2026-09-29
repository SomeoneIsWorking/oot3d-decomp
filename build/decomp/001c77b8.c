// OoT3D decomp @ 001c77b8  name=FUN_001c77b8  size=372

void FUN_001c77b8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;

  FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_001c7930;
  uVar6 = DAT_001c792c;
  iVar4 = FUN_003736fc(DAT_001c7930,DAT_001c792c,param_1 + 0x1a4);
  if ((iVar4 != 0) || (iVar4 = FUN_003736fc(DAT_001c7934,uVar6,param_1 + 0x1a4), iVar4 != 0)) {
    FUN_00375bcc(param_1,DAT_001c7938);
  }
  uVar3 = DAT_001c7948;
  uVar6 = DAT_001c7944;
  iVar4 = DAT_001c7940;
  if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
    if (*(short *)(param_1 + 0x1c) == 0x20) {
      iVar7 = *(int *)(param_1 + 0x124);
      sVar1 = *(short *)(iVar7 + 0x1c);
      bVar8 = sVar1 != 0x40;
      if (bVar8) {
        iVar7 = *(int *)(param_1 + 0x128);
        sVar1 = *(short *)(iVar7 + 0x1c);
      }
      if (bVar8 && sVar1 != 0x40) {
        *(undefined2 *)(param_1 + 0x1c) = 0x10;
        return;
      }
      uVar5 = FUN_0036e800(param_1,iVar7);
      FUN_00370378(param_1 + 0xbe,uVar5,DAT_001c794c);
      iVar7 = FUN_00357eac(param_1,iVar7);
      if (iVar4 <= iVar7) {
        return;
      }
      FUN_00375c08(uVar3,uVar2,uVar6,uVar2,param_1 + 0x1a4,2);
      uVar6 = DAT_001c7950;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
    }
    else {
      FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),3,DAT_001c7954);
      if (iVar4 <= *(int *)(param_1 + 0x98)) {
        return;
      }
      FUN_00375c08(uVar3,uVar2,uVar6,uVar2,param_1 + 0x1a4,2);
      uVar6 = DAT_001c7958;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x7d8) = uVar6;
    return;
  }
  *(undefined2 *)(DAT_001c793c + param_1) = *(undefined2 *)(param_1 + 0x82);
  FUN_00363d50(param_1);
  return;
}
