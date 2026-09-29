// OoT3D decomp @ 004373bc  name=FUN_004373bc  size=208

void FUN_004373bc(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int *in_r3;
  int iVar5;
  int *local_10;

  iVar5 = DAT_0043748c;
  *(undefined1 *)(DAT_0043748c + 3) = 4;
  if (*(code **)(iVar5 + 0x28) != (code *)0x0) {
    local_10 = in_r3;
    (**(code **)(iVar5 + 0x28))(*(undefined4 *)(iVar5 + 0x68));
  }
  piVar2 = DAT_00437490;
  local_10 = DAT_00437490;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar3 != DAT_00437490[1]) {
    bVar4 = false;
    do {
      if (*DAT_00437490 < 1) {
        ClearExclusiveLocal();
        goto LAB_00437420;
      }
      bVar1 = (bool)hasExclusiveAccess(DAT_00437490);
    } while (!bVar1);
    *DAT_00437490 = -*DAT_00437490;
    bVar4 = true;
LAB_00437420:
    if (bVar4) {
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      piVar2[1] = iVar3;
    }
    else {
      FUN_003351e8(piVar2);
    }
  }
  piVar2[2] = piVar2[2] + 1;
  for (iVar5 = *(int *)(iVar5 + 4); iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
    if (*(code **)(iVar5 + 8) != (code *)0x0) {
      (**(code **)(iVar5 + 8))(*(undefined4 *)(iVar5 + 0xc));
    }
  }
  FUN_0030aedc(&local_10);
  FUN_0044b030();
  return;
}
