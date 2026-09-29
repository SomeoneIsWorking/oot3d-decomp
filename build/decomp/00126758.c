// OoT3D decomp @ 00126758  name=FUN_00126758  size=204

void FUN_00126758(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int in_r12;
  bool bVar6;

  uVar3 = DAT_0012683c;
  iVar1 = DAT_00126830;
  iVar4 = DAT_00126824;
  if (*(short *)(param_1 + 0x1c) == 2) {
    iVar5 = *(int *)(*(int *)(DAT_00126824 + 0x90) + 0x1a4);
    bVar6 = iVar5 == DAT_00126828;
    if (bVar6) {
      iVar5 = *(int *)(DAT_00126824 + 0x8c);
      in_r12 = *(int *)(iVar5 + 0x1a4);
    }
    if ((bVar6 && in_r12 == DAT_00126828) &&
       (3 < (uint)*(byte *)(*(int *)(DAT_00126824 + 0x90) + 0xb7) + (uint)*(byte *)(iVar5 + 0xb7)))
    {
      *(undefined4 *)(param_1 + 0x1a4) = DAT_0012682c;
      *(undefined2 *)(iVar1 + param_1) = 0;
      uVar2 = DAT_00126838;
      *(undefined2 *)(param_1 + 0x498) = 0;
      *(undefined4 *)(iVar5 + 0x1a4) = DAT_00126834;
      *(undefined4 *)(iVar5 + 0x520) = uVar2;
      *(undefined4 *)(iVar5 + 0x6c) = uVar2;
      FUN_00370350(uVar3,iVar5 + 0x5c0,0xb);
      iVar4 = *(int *)(iVar4 + 0x90);
      *(undefined4 *)(iVar4 + 0x1a4) = DAT_00126834;
      *(undefined4 *)(iVar4 + 0x520) = uVar2;
      *(undefined4 *)(iVar4 + 0x6c) = uVar2;
      FUN_00370350(uVar3,iVar4 + 0x5c0,0xb);
      return;
    }
  }
  return;
}
