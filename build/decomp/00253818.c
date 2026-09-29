// OoT3D decomp @ 00253818  name=FUN_00253818  size=448

void FUN_00253818(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;

  sVar1 = *(short *)(param_1 + 0x1c);
  FUN_00372d4c(DAT_002539d8,DAT_002539d8,param_1 + 0xbc,0);
  FUN_0037572c(DAT_002539dc,param_1);
  uVar3 = DAT_002539e0;
  if ((sVar1 == 0) || (uVar3 = DAT_00253a04, sVar1 == 1)) {
    *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  }
  else if (sVar1 == 2) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_002539e4;
  }
  else {
    if (((sVar1 != 3) ||
        (*(undefined4 *)(param_1 + 0x1a4) = DAT_002539e8,
        (*(ushort *)(DAT_002539ec + 0xfc) & 1) == 0)) ||
       ((*(ushort *)(DAT_002539ec + 0xf4) & 8) != 0)) {
      FUN_00374428(param_1);
      return;
    }
    z_actor_003738d0(DAT_002539f8,DAT_002539f4,DAT_002539f0,param_2 + 0x208c,param_2,DAT_002539fc,0,
                     4,1,0x3800,1);
    FUN_0037572c(DAT_00253a00,param_1);
  }
  *(undefined2 *)(param_1 + 0x1a8) = 0x400;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_00253a08 + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  if (((*DAT_00253a0c & 1) == 0) && (iVar2 = FUN_003679b4(DAT_00253a0c), iVar2 != 0)) {
    FUN_0036788c(DAT_00253a10);
  }
  piVar4 = *(int **)(DAT_00253a10 + 0x17c);
  piVar4[2] = *(int *)(param_1 + 0x178);
  uVar3 = ObjectBankArchive_00358ef8(param_2 + 0x10,1);
  uVar3 = (**(code **)(*piVar4 + 8))(piVar4,uVar3,1);
  *(undefined4 *)(param_1 + 0x1ac) = uVar3;
  piVar4[2] = 0;
  return;
}
