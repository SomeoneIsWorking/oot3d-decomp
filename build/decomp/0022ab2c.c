// OoT3D decomp @ 0022ab2c  name=FUN_0022ab2c  size=540

void FUN_0022ab2c(int param_1,int param_2)

{
  uint *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;

  FUN_003510b0(param_1,DAT_0022adb4);
  uVar5 = DAT_0022add4;
  puVar1 = DAT_0022adbc;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0022adb8 + iVar3) != 0)
     ) {
    iVar3 = iVar3 + 0x3a5c;
  }
  else {
    iVar3 = 0;
  }
  iVar3 = iVar3 + 0x10;
  if (*(short *)(param_1 + 0x1c) != 10) {
    FUN_00372d4c(DAT_0022add4,DAT_0022adcc,param_1 + 0xbc,DAT_0022add0);
    *(undefined4 *)(param_1 + 0x634) = 0;
    uVar6 = ObjectBankArchive_00358ef8(iVar3,0);
    puVar2 = DAT_0022add8;
    FUN_00358ea8(iVar3,param_2,param_1 + 0x5b0,uVar6);
    FUN_00353dd0(param_2,param_1 + 0x1b0);
    FUN_00353d24(param_2,param_1 + 0x1b0,param_1,puVar2 + 0x18);
    FUN_00350d20(param_1 + 0xa0,0,puVar2 + 0x14);
    FUN_003462ac(param_2,param_1,((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18);
    *(undefined2 *)(param_1 + 0x1ac) = *(undefined2 *)(param_1 + 0x116);
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
    *puVar2 = 0;
    if ((*(short *)(param_1 + 0x116) == 0x109b) && (iVar3 = FUN_0036cf6c(param_2,9), iVar3 != 0)) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    FUN_0037422c(uVar5,param_1 + 0x5b0,*(undefined4 *)(puVar2 + 10));
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(100,0x32);
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffa;
  if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0022adbc), iVar4 != 0)) {
    FUN_0036788c(DAT_0022adc0);
  }
  piVar7 = *(int **)(DAT_0022adc0 + 0x17c);
  piVar7[2] = *(int *)(param_1 + 0x178);
  uVar5 = ObjectBankArchive_00358ef8(iVar3,2);
  uVar5 = (**(code **)(*piVar7 + 8))(piVar7,uVar5,1);
  *(undefined4 *)(param_1 + 0x634) = uVar5;
  piVar7[2] = 0;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  *(undefined1 *)(param_1 + 0x19b) = 2;
  return;
}
