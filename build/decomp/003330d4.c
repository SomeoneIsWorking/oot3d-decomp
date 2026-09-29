// OoT3D decomp @ 003330d4  name=FUN_003330d4  size=200

void FUN_003330d4(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined8 uVar4;

  puVar1 = DAT_0033319c;
  if ((*(byte *)(param_1 + 0x260) & 1) != 0) {
    if (((*DAT_0033319c & 1) == 0) &&
       (uVar4 = FUN_003679b4(DAT_0033319c), param_2 = (undefined4)((ulonglong)uVar4 >> 0x20),
       (int)uVar4 != 0)) {
      FUN_0036788c(DAT_003331a0);
      param_2 = DAT_003331a8;
    }
    iVar3 = DAT_003331ac;
    FUN_0032d5dc(DAT_003331ac,param_2);
    FUN_00371eac(*(undefined4 *)(param_1 + 0x270),0);
    uVar2 = extraout_r1;
    if (((*puVar1 & 1) == 0) &&
       (uVar4 = FUN_003679b4(DAT_0033319c), uVar2 = (int)((ulonglong)uVar4 >> 0x20), (int)uVar4 != 0
       )) {
      FUN_0036788c(iVar3 + -0x180);
      uVar2 = DAT_003331a8;
    }
    FUN_0032d5b8(iVar3,uVar2);
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x270);
  if (((*DAT_00371f08 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00371f08), iVar3 != 0)) {
    FUN_0036788c(DAT_00371f0c);
  }
  FUN_00367788(DAT_00371f18,uVar2,0);
  return;
}
