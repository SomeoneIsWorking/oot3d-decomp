// OoT3D decomp @ 00334950  name=FUN_00334950  size=380

undefined4 FUN_00334950(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;

  uVar2 = DAT_00334ad0;
  iVar1 = DAT_00334acc;
  if ((*(short *)(DAT_00334acc + 0x5e) == 10) && (iVar5 = FUN_0037577c(param_2), iVar5 == 0)) {
    *(undefined2 *)(iVar1 + 0x5e) = 0;
    FUN_0034ec14();
    FUN_0037547c(DAT_00334adc,0,4,DAT_00334ad8,DAT_00334ad8,DAT_00334ad4);
    uVar3 = DAT_00334ae0;
    *(short *)(param_1 + 0x116) = (short)DAT_00334ae0;
    FUN_00367c7c(param_2,uVar3,0);
    *(undefined2 *)(param_1 + 0xc8e) = 5;
    *(undefined2 *)(param_1 + 0xca0) = 0;
    *(undefined2 *)(param_1 + 0xc9e) = 0;
    *(undefined2 *)(param_1 + 0xc98) = 0;
    *(undefined2 *)(param_1 + 0xca4) = 0;
    *(undefined1 *)(param_1 + 0xd1a) = 0;
    FUN_0036e980(param_2,0,8);
    *(undefined4 *)(param_1 + 0xc7c) = uVar2;
    return 1;
  }
  iVar5 = DAT_00334ae4;
  sVar4 = 5;
  if ((*(ushort *)(DAT_00334ae4 + 0xf2) & 0x100) != 0) {
    sVar4 = 10;
  }
  if (*(short *)(param_1 + 0xca0) < sVar4) {
    return 0;
  }
  *(undefined2 *)(iVar1 + 0x5e) = 0;
  *(undefined2 *)(param_1 + 0xca0) = 0;
  *(undefined2 *)(param_1 + 0xc9e) = 0;
  *(undefined2 *)(param_1 + 0xc98) = 0;
  *(undefined2 *)(param_1 + 0xca4) = 0;
  *(undefined1 *)(param_1 + 0xd1a) = 0;
  if ((*(ushort *)(iVar5 + 0xf2) & 0x100) == 0) {
    *(short *)(param_1 + 0x116) = (short)DAT_00334ae8;
  }
  else {
    *(short *)(param_1 + 0x116) = (short)DAT_00334aec;
    if (*(short *)(param_1 + 0xca6) < 100) {
      *(short *)(param_1 + 0xca6) = *(short *)(param_1 + 0xca6) + 1;
    }
  }
  FUN_00367c7c(param_2,*(undefined2 *)(param_1 + 0x116),0);
  *(undefined2 *)(param_1 + 0xc8e) = 5;
  FUN_0034ec14();
  FUN_0035c528(DAT_00334af0);
  FUN_0036e980(param_2,0,8);
  if ((*(ushort *)(iVar5 + 0xf2) & 0x100) == 0) {
    *(undefined4 *)(param_1 + 0xc7c) = DAT_00334af4;
  }
  else {
    *(undefined4 *)(param_1 + 0xc7c) = uVar2;
  }
  return 1;
}
