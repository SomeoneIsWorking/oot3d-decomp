// OoT3D decomp @ 001ec374  name=FUN_001ec374  size=180

void FUN_001ec374(int param_1,int param_2)

{
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  undefined1 auStack_40 [48];

  FUN_00372224(auStack_40,param_1 + 0x148);
  *(undefined1 *)(*(int *)(param_1 + 0x1c0) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1c0),auStack_40);
  FUN_00372170(*(undefined4 *)(param_1 + 0x1c0),0);
  if ((*(short *)(param_2 + 0x104) != 0x53) && (*(int *)(param_1 + 0x1c8) == 0)) {
    local_44 = *(float *)(param_1 + 0x74) * DAT_001ec42c;
    local_4c = DAT_001ec428;
    local_48 = DAT_001ec428;
    FUN_00372070(auStack_40,auStack_40,&local_4c);
    *(undefined1 *)(*(int *)(param_1 + 0x1c4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1c4),auStack_40);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1c4),0);
  }
  return;
}
