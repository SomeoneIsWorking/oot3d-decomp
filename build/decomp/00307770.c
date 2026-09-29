// OoT3D decomp @ 00307770  name=FUN_00307770  size=208

void FUN_00307770(int param_1)

{
  if (*(char *)(param_1 + 0x1a) != '\0') {
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4 + 0xaf8) + 0x6c) =
         1;
    *(undefined1 *)
     (*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0xc) + 1) * 4 + 0xaf8) + 0x6c) = 1;
    *(undefined1 *)
     (*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0xc) + 2) * 4 + 0xaf8) + 0x6c) = 1;
    *(undefined1 *)
     (*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0xc) + 3) * 4 + 0xaf8) + 0x6c) = 1;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x10) * 4 + 0xaf8) + 0x6c) =
         1;
    *(undefined1 *)
     (*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0x10) + 1) * 4 + 0xaf8) + 0x6c) = 1;
    *(undefined1 *)
     (*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0x10) + 2) * 4 + 0xaf8) + 0x6c) = 1;
  }
  return;
}
